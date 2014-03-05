#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<map>
#include<queue>
using namespace std;

int main()
{
    int M, N, P, m[31][31], visited[31], value[31], legs, size, sol, cases, a, b, v;
    string str;
    map<string, int> mymap;
    queue<int> myqueue;
    cin>>cases;
    cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;
    for(int t=1; t<=cases; t++)
    {
	cout<<"DATA SET  "<<t<<endl<<endl;
	memset(m, 0, sizeof(m));
	cin>>M>>N>>P;
	for(int i=0; i<M; i++)
	{
	    cin>>str;
	    mymap.insert(pair<string, int>(str,i));
	}
	for(int i=0; i<N; i++)
	{
	    cin>>str;
	    a = mymap.find(str)->second;
	    cin>>str;
	    b = mymap.find(str)->second;
	    m[a][b] = m[b][a] = 1;
	}
	for(int i=0; i<P; i++)
	{
	    legs = size = sol = 0;
	    memset(visited, 0, sizeof(visited));
	    memset(value, 0, sizeof(value));
	    cin>>size;
	    cin>>str;
	    a = mymap.find(str)->second;
	    cin>>str;
	    b = mymap.find(str)->second;
	    visited[a] = 1;
	    value[a] = 0;
	    myqueue.push(a);
	    while(!myqueue.empty())
	    {
		v = myqueue.front();
		myqueue.pop();
		if(v == b)
		{
		    sol = 1;
		    cout<<"$"<<size*value[b]*100<<endl;
		    break;
		}
		for(int j=0; j<M; j++)
		    if(m[v][j] == 1 && visited[j] == 0)
		    {
			visited[j] = 1;
			myqueue.push(j);
			value[j] = value[v]+1;
		    }
	    }
	    if(sol == 0)
		cout<<"NO SHIPMENT POSSIBLE"<<endl;
	    while(!myqueue.empty())
		myqueue.pop();
	}
	mymap.clear();
	cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
