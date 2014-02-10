#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int n[10002], A[10002], B[10002], N;
void LIS();
int main()
{
    int t, ans;
    while(scanf("%d", &N) != EOF)
    {
	memset(n, 0, sizeof(n));
	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	ans = 0;
	for(int i=0; i<N; i++)
	    scanf("%d", &n[i]);
	LIS();
	for(int i=0; i<N; i++)
	{
	    if(A[i] < B[i])
		t = A[i];
	    else
		t = B[i];
	    if((t*2-1) > ans)
		ans = t*2-1;
	}
	printf("%d\n", ans);
    }
    return 0;
}

void LIS()
{
    int temp;
    vector<int> v;
    v.push_back(n[0]);
    A[0] = v.size();
    for(int i=1; i<N; i++)
    {
	temp = n[i];
	if(temp > v.back())
	{
	    v.push_back(temp);
	    A[i] = v.size();
	}
	else
	{
	    *lower_bound(v.begin(), v.end(), temp) = temp;
	    A[i] = v.size();
	}
    }
    v.clear();
    v.push_back(n[N-1]);
    B[N-1] = v.size();
    for(int i=(N-2); i>=0; i--)
    {
	temp = n[i];
	if(temp > v.back())
	{
	    v.push_back(temp);
	    B[i] = v.size();
	}
	else
	{
	    *lower_bound(v.begin(), v.end(), temp) = temp;
	    B[i] = v.size();
	}
    }
}
