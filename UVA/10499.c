#include<stdio.h>
 
int main()
{
	long long int N;
	while(scanf("%lld",&N)!=EOF)
	{
		if(N>0)
		{
			if(N==1)
				printf("0%%\n");
			else
				printf("%lld%%\n",N*25);
		}
		else
			break;	
	}
	return 0;
}
