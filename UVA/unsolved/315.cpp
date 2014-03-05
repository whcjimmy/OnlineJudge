#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int graph[101][101], dfn[101], low[101];

int main()
{
    int N, a, temp;
    string s;
    while(scanf("%d",&N)!=EOF && N!=0)
    {
	memset(graph, 0, sizeof(graph));
	memset(dfn, 0, sizeof(dfn));
	memset(low, 0, sizeof(low));
	temp  = 0;
	whiel(scanf("%d",&a) != 0)
	{
	    getline(cin,s);
	    for(int i=1; i<s.length(); i++)
		if(s[i] != ' ')
		    temp = temp*10+s[i]-48;
		else
		{
		    graph[a][temp] = 1;
		    temp = 0;
		}
	    graph[a][temp] = 1;
	}
    }
	
    return 0;
}
