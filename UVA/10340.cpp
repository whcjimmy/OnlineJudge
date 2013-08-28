#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char S[100001],T[100001];
    int check,l1,l2,i,j;
    while(scanf("%s %s",S,T)!=EOF)
    {
	l1=strlen(S);
	l2=strlen(T);
	check=j=0;
	for(i=0;i<l1;i++)
	{
	    while(j<l2)
		if(S[i]==T[j++])
		{
		    if(i==(l1-1))
			check=1;
		    break;
		}
	    if(j==l2)
		break;
	}
	if(check) printf("Yes\n");
	else printf("No\n");
    }
    return 0;
}

