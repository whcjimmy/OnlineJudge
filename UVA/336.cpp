#include<cstdio>
#include<cstring>
#include<map>
#include<queue>
using namespace std;

int net[31][31], visited[31], rest[31], count, node;
void bfs(int , int);
int main()
{
    int N, a, b,cases, temp, v, c;
    map<int, int> mymap;
    map<int, int>:: iterator it;
    queue<int> myqueue;
    cases = 1;
    while(scanf("%d",&N) != EOF && N != EOF)
    {
	node = count = 0;
	memset(net, 0, sizeof(net));
	memset(visited, 0, sizeof(visited));
	memset(rest, 0, sizeof(rest));
	for(int i=0; i<N; i++)
	{
	    scanf("%d %d",&a,&b);
	    if(a != b)
	    {
		it = mymap.find(a);
		if(it == mymap.end()) mymap.insert(pair<int, int>(a, node++));
		it = mymap.find(b);
		if(it == mymap.end()) mymap.insert(pair<int, int>(b, node++));
		net[mymap.find(a)->second][mymap.find(b)->second] = net[mymap.find(b)->second][mymap.find(a)->second] = 1;
	    }
	    else
	    {
		it = mymap.find(a);
		if(it == mymap.end()) mymap.insert(pair<int, int>(a, node++));
	    }
	}
	while(scanf("%d %d",&a, &b))
	    if(a == 0 && b == 0)
		break;
	    else
	    {
		if(mymap.find(a) == mymap.end())
		    count = 0;
		else
		{
		    temp = b;
		    myqueue.push(mymap.find(a)->second);
		    rest[mymap.find(a)->second] = temp;
		    while(!myqueue.empty())
		    {
			v = myqueue.front();
			myqueue.pop();
			visited[v] = 1;
			if(rest[v] != 0)
			    for(int i=0; i<node; i++)
				if(visited[i] == 0 && net[v][i] == 1 && v != i)
				{
				    myqueue.push(i);
				    visited[i] = 1;
				    rest[i] = rest[v]-1;
				}
		    }
		}
		for(int i=0; i<node; i++)
		    if(visited[i] == 1)
			count++;
		printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", cases++, (node - count), a, b);
		count = 0;
		memset(visited, 0 ,sizeof(visited));
		memset(rest, 0 ,sizeof(rest));
		while(!myqueue.empty())
		    myqueue.pop();
	    }
	mymap.clear();
    }
    return 0;
}
