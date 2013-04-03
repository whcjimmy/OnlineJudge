#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[100000];
	long long int i,length,count;
	while(fgets(input,100000,stdin)!=NULL){
		count=0;
		length=strlen(input);
		for(i=0;i<length;i++)
			if((input[i]-65)*(input[i]-90)<=0||(input[i]-97)*(input[i]-122)<=0)
				count++;
		printf("%lld\n",count);
	}
	return 0;
}
