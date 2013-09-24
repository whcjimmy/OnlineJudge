#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;

int k, n, dp[31], prev[31];
typedef struct
{
    int num;
    int line[10];
}Box;
bool cmp(Box a, Box b)
{
    for(int i=0; i<n; i++)
	if(a.line[i] > b.line[i])
	    return false;
    return true;
}
int main()
{
    Box box[30];
    int check, ans;
    stack<int> mystack;
    while(scanf("%d%d", &k, &n) != EOF)
    {
	check = ans = 0;
	memset(prev, -1, sizeof(prev));
	for(int i=0; i<k; i++)
	{
	    dp[i] = 1;
	    for(int j=0; j<n; j++)
	    {
		scanf("%d", &box[i].line[j]);
		box[i].num = i+1;
	    }
	}
	for(int i=0; i<k; i++)
	    sort(box[i].line, box[i].line+n);
	sort(box, box+k, cmp);
	for(int i=0; i<(k-1); i++)
	    for(int j=(i+1); j<k; j++)
	    {
		check = 0;
		for(int k=0; k<n; k++)
		    if(box[i].line[k] >= box[j].line[k])
		    {
			check = 1;
			break;
		    }
		if(!check)
		    if(dp[i]+1 > dp[j])
		    {
			dp[j] = dp[i]+1;
			prev[j] = i;
		    }
	    }
	for(int i=0; i<k; i++)
	    if(dp[i] >= ans)
	    {
		ans = max(ans, dp[i]);
		check = i;
	    }
	printf("%d\n", ans);
	while(prev[check] != -1)
	{
	    mystack.push(box[check].num);
	    check = prev[check];
	}
	mystack.push(box[check].num);
	check = 0;
	while(!mystack.empty())
	{
	    if(check == 0)
	    {
		printf("%d", mystack.top());
		check = 1;
	    }
	    else
		printf(" %d", mystack.top());
	    mystack.pop();
	}
	printf("\n");
    }
    return 0;
}

