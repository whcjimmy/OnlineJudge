#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int num;
	int a;
	while(scanf("%lld",&num)!=EOF){
		a=0;
		do{
			if(a==0){
				if(num%10==0){
					num=(num-num%10)/10;
				}else{
					printf("%lld",num%10);
					num=(num-num%10)/10;
					a=1;
				}
			}else{
				printf("%lld",num%10);
				num=(num-num%10)/10;
			}                           
		}while(num/10!=0);
		printf("%lld\n",num);

	}
}
