#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int a,b,c,temp,num[1000],i;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		i=c=0;
		printf("[");
		while(a%b)	
		{
			if(c==0)
				c++;
			else if(c==1) 
			{
				printf(";");
				c++;
			}
			else
				printf(",");
			printf("%lld",a/b);
			a%=b;
			swap(a,b);
		}
		if(c==0)
			c++;
		else if(c==1)
			printf(";");
		else
			printf(",");
		printf("%lld]\n",a);
	}
	return 0;
}
