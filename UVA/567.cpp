#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

int m[22][22], visited[22];
int main()
{
    int cases, X, J, N, A, B, v;
    queue<int> myqueue;
    cases = 1;
    while(scanf("%d", &X)!=EOF)
    {
	printf("Test Set #%d\n", cases++);
	memset(m, 0, sizeof(m));
	for(int i=1; i<=X; i++)
	{
	    cin>>J;
	    m[1][J] = m[J][1] = 1;
	}
	for(int i=2; i<=19; i++)
	{
	    cin>>X;
	    for(int j=1; j<=X; j++)
	    {
		cin>>J;
		m[i][J] = m[J][i] = 1;
	    }
	}	
	cin>>N;
	for(int i=0; i<N; i++)
	{
	    memset(visited, -1, sizeof(visited));
	    while(!myqueue.empty())
		myqueue.pop();
	    cin>>A>>B;
	    myqueue.push(A);
	    visited[A] = 0;
	    while(!myqueue.empty())
	    {
		v = myqueue.front();
		myqueue.pop();
		if(v == B)
		    break;
		for(int j=1; j<=20; j++)
		    if(m[v][j] == 1 && visited[j] < 0)
		    {
			visited[j] = visited[v]+1;
			myqueue.push(j);
		    }
	    }
	    printf("%2d to %2d: %d\n", A, B, visited[B]);
	}
	printf("\n");
    }
    return 0;
}
