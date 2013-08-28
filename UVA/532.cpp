#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
int L,R,C,sL,sR,sC,eL,eR,eC,v[35][35][35];
char m[35][35][35];

struct QUEUE{
    int x,y,z,t;
}tmp,next;

int bfs(int ,int ,int );
int main()
{
    int i,j,k,answer;
    while(scanf("%d%d%d",&L,&R,&C),L||R||C)
    {
	memset(v,0,sizeof(v));
	answer=0;
	for(i=0;i<L;i++)
	    for(j=0;j<R;j++)
	    {
		scanf("%s",m[i][j]);
		for(k=0;k<C;k++)
		{
		    if(m[i][j][k]=='S')
		    {
			sL=i;
			sR=j;
			sC=k;
		    }
		    else if(m[i][j][k]=='E')
		    {
			eL=i;
			eR=j;
			eC=k;
		    }
		    else if(m[i][j][k]=='#')
			v[i][j][k]=1;
		}
	    }
	answer=bfs(sL,sR,sC);
	if(answer)
	    printf("Escaped in %d minute(s).\n",answer);
	else 
	    printf("Trapped!\n");
    }
    return 0;
}

int bfs(int x,int y,int z)
{
    queue<QUEUE>myqueue;
    v[sL][sR][sC]=1;
    tmp.x=sL; tmp.y=sR; tmp.z=sC; tmp.t=0;
    myqueue.push(tmp);
    while(!myqueue.empty())
    {
	tmp=myqueue.front();
	myqueue.pop();
	if(tmp.x==eL&&tmp.y==eR&&tmp.z==eC)
	    return tmp.t;
	if(tmp.x>0&&v[tmp.x-1][tmp.y][tmp.z]==0)
	{
	    next.x=tmp.x-1; next.y=tmp.y; next.z=tmp.z; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1;
	}
	if(tmp.y>0&&v[tmp.x][tmp.y-1][tmp.z]==0)
	{
	    next.x=tmp.x; next.y=tmp.y-1; next.z=tmp.z; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1; 
	}
	if(tmp.z>0&&v[tmp.x][tmp.y][tmp.z-1]==0)
	{
	    next.x=tmp.x; next.y=tmp.y; next.z=tmp.z-1; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1; 
	}
	if(tmp.x<(L-1)&&v[tmp.x+1][tmp.y][tmp.z]==0)
	{
	    next.x=tmp.x+1; next.y=tmp.y; next.z=tmp.z; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1; 
	}
	if(tmp.y<(R-1)&&v[tmp.x][tmp.y+1][tmp.z]==0)
	{
	    next.x=tmp.x; next.y=tmp.y+1; next.z=tmp.z; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1; 
	}
	if(tmp.z<(C-1)&&v[tmp.x][tmp.y][tmp.z+1]==0)
	{
	    next.x=tmp.x; next.y=tmp.y; next.z=tmp.z+1; next.t=tmp.t+1; myqueue.push(next); v[next.x][next.y][next.z]=1; 
	}
    }
    return 0;
}


