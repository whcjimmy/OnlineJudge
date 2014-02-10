#include<stdio.h>
#include<stdlib.h>

long long int a(long long int);

int main()
{
    long long int tmp,n,mat[3000],j,check2;
    while(scanf("%lld",&n)!=EOF)
    {
	int check[n];
	for(j=0;j<n;j++)
	    check[j]=0;
	for(j=0;j<n;j++) {tmp=scanf("%lld",&mat[j]);}
	check2=0;
	for(j=0;j<(n-1);j++)
	{
	    if(a(mat[j]-mat[j+1])>=n||a(mat[j]-mat[j+1])<1)
	    {
		check2=1;
		break;
	    }
	    else
	    {
		check[a(mat[j]-mat[j+1])]=1;
		check2=0;
	    }
	}
	if(check2==0)
	    for(j=1;j<n;j++)
		if(check[j]==0)
		{
		    check2=1;
		    break;
		}
		else
		    check2=0;
	if(check2==1)
	    printf("Not jolly\n");
	else
	    printf("Jolly\n");
    }
    return 0;
}

long long int a(long long int input)
{
    if(input>=0)
	return input;
    else
	return 0-input;
}
