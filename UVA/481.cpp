#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int n;
int LIS();
vector<int> seq;
vector<int> v;
vector<int> p;
int main()
{
    int num, ans;
    stack<int> mystack;
    n = 0;
    while(scanf("%d", &num) != EOF)
	seq.push_back(num);
    ans = LIS();
    printf("%d\n-\n", ans);
    ans --;
    for(int i = p.size()-1; i>=0; i--)
    {
	if(p[i] != ans)
	    continue;
	mystack.push(seq[i]);
	ans--;
    }
    while(!mystack.empty())
    {
	printf("%d\n", mystack.top());
	mystack.pop();
    }
    return 0;
}

int LIS()
{
    v.push_back(seq[0]);
    p.push_back(0);
    for(int i=1; i<seq.size(); i++)
	if(seq[i] > v.back())
	{
	    p.push_back(v.size());
	    v.push_back(seq[i]);
	}
	else
	{
	    vector<int>::iterator low;
	    low = lower_bound(v.begin(), v.end(), seq[i]);
	    v[low - v.begin()] = seq[i];
	    p.push_back(low - v.begin());
	}
    return v.size();
}
