#include<cstdio>
using namespace std;

int main()
{
	int n,k,count;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		count=n;
		while(n/k)
		{
			count+=n/k;
			n=n/k+n%k;
		}
		printf("%d\n",count);
	}
	return 0;
}


