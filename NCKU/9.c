#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char S[100000],T[100000];
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
                    break;
            if(i==(l1-1)&&j==l2)
                check=1;
            else check=0;
            if(i==(l1-1))
                check=1;
            if(j==l2)
                break;
       }
       if(check) printf("Yes\n");
       else printf("No\n");
    }
    return 0;
}

