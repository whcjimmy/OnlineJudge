#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<queue>
using namespace std;

int visited[9][9];
queue<int> myqueue;
void bfs(int ,int );
int main()
{
    int  start, finish, v, x, y;
    string s1, s2;
    while(cin>>s1>>s2)
    {
	memset(visited, -1, sizeof(visited));
	start  = (s1[0]- 96)*10+(s1[1] - 48);
	finish = (s2[0]- 96)*10+(s2[1] - 48);
	myqueue.push(start);
	visited[s1[0] - 96][s1[1] - 48] = 0;
	while(!myqueue.empty())
	{
	   v = myqueue.front();
	   myqueue.pop();
	   if(v == finish)
	   {
	       cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<visited[s2[0] - 96][s2[1] - 48]<<" knight moves."<<endl;
	       break;
	   }
	   x = (v - v%10)/10;
	   y = v%10;
	   bfs(x, y);
	}
	while(!myqueue.empty())
	    myqueue.pop();
    }
    return 0;
}

void bfs(int x, int y)
{
    if((x-2)>=1 && (y-1)>=1 && visited[x-2][y-1] < 0)
    {
	visited[x-2][y-1] = visited[x][y]+1;
	myqueue.push((x-2)*10+(y-1));
    }
    if((x-1)>=1 && (y-2)>=1 && visited[x-1][y-2] < 0)
    {
	visited[x-1][y-2] = visited[x][y]+1;
	myqueue.push((x-1)*10+(y-2));
    }
    if((x+2)<=8 && (y-1)>=1 && visited[x+2][y-1] < 0)
    {
	visited[x+2][y-1] = visited[x][y]+1;
	myqueue.push((x+2)*10+(y-1));
    }
    if((x+1)<=8 && (y-2)>=1 && visited[x+1][y-2] < 0)
    {
	visited[x+1][y-2] = visited[x][y]+1;
	myqueue.push((x+1)*10+(y-2));
    }
    if((x-2)>=1 && (y+1)<=8 && visited[x-2][y+1] < 0)
    {
	visited[x-2][y+1] = visited[x][y]+1;
	myqueue.push((x-2)*10+(y+1));
    }
    if((x-1)>=1 && (y+2)<=8 && visited[x-1][y+2] < 0)
    {
	visited[x-1][y+2] = visited[x][y]+1;
	myqueue.push((x-1)*10+(y+2));
    }
    if((x+2)<=8 && (y+1)<=8 && visited[x+2][y+1] < 0)
    {
	visited[x+2][y+1] = visited[x][y]+1;
	myqueue.push((x+2)*10+(y+1));
    }
    if((x+1)<=8 && (y+2)<=8 && visited[x+1][y+2] < 0)
    {
	visited[x+1][y+2] = visited[x][y]+1;
	myqueue.push((x+1)*10+(y+2));
    }
}

