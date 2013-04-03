#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

long long int m[2000005];

int main()
{
    long long int n,i;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
                scanf("%lld",&m[i]);
            sort(m,m+n);
			for(i=0;i<n;i++)
			{
                printf("%lld",m[i]);
				if(i!=(n-1))
					printf(" ");
			}
        	printf("\n");
		}
    }
    return 0;
}
