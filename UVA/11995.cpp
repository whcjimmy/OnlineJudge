#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
using namespace std;

/*
struct NODE
{
    int v;
    bool operator < (const NODE &in) const
    {
	return v < in.v;
    }
};*/
stack<int> mystack;
queue<int> myqueue;
priority_queue<int> mypq;
//priority_queue<NODE> mypq;
int m[1002][2], n, ts, tq, tpq;
int teststack();
int testqueue();
int testpqueue();
int main()
{
    while(cin>>n)
    {
	ts = tq = tpq = 0;
	memset(m, 0, sizeof(m));
	for(int i=0; i<n; i++)
	    cin>>m[i][0]>>m[i][1];
	ts = teststack();
	tq = testqueue();
	tpq = testpqueue();
	if(ts == 0 && tq != 0 && tpq != 0)
	    cout<<"stack"<<endl;
	else if(tq == 0 && ts != 0 && tpq != 0)
	    cout<<"queue"<<endl;
	else if(tpq == 0 && ts != 0 && tq != 0)
	    cout<<"priority queue"<<endl;
	else if((ts + tq + tpq) == 3)
	    cout<<"impossible"<<endl;
	else if((ts + tq + tpq) == 1 || (ts + tq + tpq) == 0)
	    cout<<"not sure"<<endl;
	while(!mystack.empty())
	    mystack.pop();
	while(!myqueue.empty())
	    myqueue.pop();
	while(!mypq.empty())
	    mypq.pop();
    }
    return 0;
}

int teststack()
{
    for(int i=0; i<n; i++)
	if(m[i][0] == 1)
	    mystack.push(m[i][1]);
	else
	{
	    if(mystack.empty())
		return 1;
	    if(mystack.top() == m[i][1])
		mystack.pop();
	    else
		return 1;
	}
    return 0;
}

int testqueue()
{
    for(int i=0; i<n; i++)
	if(m[i][0] == 1)
	    myqueue.push(m[i][1]);
	else
	{
	    if(myqueue.empty())
		return 1;
	    if(myqueue.front() == m[i][1])
		myqueue.pop();
	    else
		return 1;
	}
    return 0;
}

int testpqueue()
{
    for(int i=0; i<n; i++)
	if(m[i][0] == 1)
	    mypq.push(m[i][1]);
	else
	{
	    if(mypq.empty())
		return 1;
	    if(mypq.top() == m[i][1])
		mypq.pop();
	    else 
		return 1;
	}
    return 0;
}

