#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int a;
    while(scanf("%lld",&a)!=EOF&&(a>=0))
	printf("%lld\n",(2+(a-1)*(a+2)/2));
    return 0;
}
