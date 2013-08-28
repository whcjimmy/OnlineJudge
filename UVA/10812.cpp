#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s,d,i,result1,result2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
	scanf("%d%d",&s,&d);
	if(s>=d)
	    if((s+d)%2==1)
		printf("impossible\n");
	    else
	    {
		result1=(s+d)/2;
		result2=(s-d)/2;
		printf("%d %d\n",result1,result2);
	    }
	else
	    printf("impossible\n");
    }
    return 0;
}
