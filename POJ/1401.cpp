#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int i,j,k,T,N,count;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
	j=1;
	count=0;
	scanf("%lld",&N);
	while(pow(5,j++)<N);
	for(k=1;k<=(j-1);k++)
	    count+=(long long int)(N/pow(5,k));
	printf("%lld\n",count);
    }
    return 0;
}
