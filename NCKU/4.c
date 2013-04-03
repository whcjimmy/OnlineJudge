#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int a,i,sum;
	while(scanf("%lld",&a)!=EOF){
		sum=1;
		if(a==0)
			printf("1\n");
		else
		{
			for(i=a;i>=1;i--)
				sum*=i;
			printf("%lld\n",sum);
		}
	}
}
         
