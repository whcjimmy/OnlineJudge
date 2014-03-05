#include<cstdio>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main()
{
    int n,i,len;
    long long int a;
    char s[10];
    while(scanf("%s",&s)!=EOF)
    {
	len=strlen(s);
	n=atoi(s);
	i=len;
	a=0;
	for(int j=0;j<len;j++)
	    a=a*10+1;
	while(a%n!=0)
	{
	    a=a*10+1;
	    a%=n;
	    i++;
	}
	printf("%d\n",i);
    }
    return 0;
}
