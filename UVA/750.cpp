#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int solution[20],row,col,result;
bool my[20],md1[20],md2[20];
void backtrack(int );
int main()
{
    int data,t,c=0;
    scanf("%d",&data);
    for(t=0;t<data;t++)
    {
	if(c==0)
	    c++;
	else
	    printf("\n");
	result=1;
	memset(my,0,sizeof(my));
	memset(md1,0,sizeof(md1));
	memset(md2,0,sizeof(md2));
	scanf("%d%d",&col,&row);
	int t1=(row+col)%15,t2=(row-col+15)%15;
	my[col]=md1[t1]=md2[t2]=true;
	solution[row]=col;
	printf("SOLN       COLUMN\n");
	printf(" #      1 2 3 4 5 6 7 8\n\n");
	backtrack(1);
    }
    return 0;
}

void backtrack(int x)
{
    if(x==row)
    {
	backtrack(x+1);
	return ;
    }
    if(x==9)
    {
	printf("%2d      ",result++);
	for(int i=1;i<9;i++)
	{
	    printf("%d",solution[i]);
	    if(i!=8)
		printf(" ");
	}
	printf("\n");
	return ;
    }
    for(int y=1;y<=8;y++)
    {
	int d1=(x+y)%15,d2=(x-y+15)%15;
	if(!my[y]&&!md1[d1]&&!md2[d2])
	{
	    my[y]=md1[d1]=md2[d2]=true;
	    solution[x]=y;
	    backtrack(x+1);
	    my[y]=md1[d1]=md2[d2]=false;
	}
    }
}
