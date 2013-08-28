#include<cstdio>
#include<cstring>
using namespcae std;

int main()
{
    int T,i,j,k,length,count;
    char s[3001],c;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
	count=0;
	scanf("%s",s);
	length=strlen(s);
	printf("Case %d: ",i+1);
	for(j=0;j<length;j++)
	{
	    if(s[j]>=65)
	    {
		if(j!=0)
		{
		    for(k=0;k<count;k++)
			printf("%c",c);
		    count=0;
		}
		c=s[j];
	    }
	    else
	    {
		count=count*10+s[j]-48;
	    }
	}
	for(k=0;k<count;k++)
	    printf("%c",c);
	printf("\n");
    }
    return 0;
}
