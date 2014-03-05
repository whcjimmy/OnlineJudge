#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#define MAX 5005
using namespace std;

struct DisjointSet
{
    int fa[MAX], nu[MAX];

    void init(int n)
    {
	for(int i=1; i<=n; i++)
	{
	    fa[i] = i, nu[i] = 1;
	}
    }

    int Find(int x)
    {
	return x == fa[x] ? x : Find(fa[x]);
    }

    void Union(int a, int b)
    {
	int x = Find(a), y = Find(b);
	nu[y] += nu[x];
	fa[x] = y;
    }

    int Solution(int n)
    {
	int ans = 0;
	for(int i=1; i<=n; i++)
	    if(nu[i] > ans)
		ans = nu[i];
	return ans;
    }
}d;
int main()
{
    int C, R, num;
    string str1, str2;
    map<string, int> animal;
    while(cin>>C>>R)
    {
	if(C == 0 && R == 0)
	    break;
	num = 1;
	animal.clear();
	d.init(C);
	for(int i=0; i<C; i++)
	{
	    cin>>str1;
	    animal[str1] = num++;
	}
	for(int i=0; i<R; i++)
	{
	    cin>>str1>>str2;
	    if(d.Find(animal[str1]) != d.Find(animal[str2]))
		d.Union(animal[str1], animal[str2]);
	}
	cout<<d.Solution(C)<<endl;
    }
    return 0;
}

