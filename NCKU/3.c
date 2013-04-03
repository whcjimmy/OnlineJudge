#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int a,b,r;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		while(b!=0){
		r=a%b;
		a=b;
		b=r;
		}
	printf("%lld\n",a);
	}
}
