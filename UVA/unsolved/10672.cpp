#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;

int sub(int );
struct node
{
    int m;
    vector<int> child;
};
int used[10001];
long long int ans;
node box[10001];
int main()
{
    int n, v, d, num, root;
    while(scanf("%d", &n) != EOF)
    {
	if(n == 0)
	    break;
	memset(used, 0, sizeof(used));
	for(int i=1; i<=n; i++)
	    box[i].child.clear();
	ans = 0;
	root = 1;
	for(int i=0; i<n; i++)
	{
	    scanf("%d%d%d", &v, &num, &d);
	    box[v].m = num;
	    for(int j=0; j<d; j++)
	    {
		scanf("%d", &num);
		box[v].child.push_back(num);
	    }
	}
	sub(root);
	printf("%lld\n", ans);
    }
    return 0;
}

int sub(int a)
{
    int t = 0;
    used[a] = 1;
    for(vector<int>::iterator it = box[a].child.begin(); it != box[a].child.end(); ++it)
	if(used[*it] == 0)
	{
	    t += sub(*it);
	    box[a].m += box[*it].m;
	}
    ans += abs(box[a].m - t - 1);
    return t+1;

}
