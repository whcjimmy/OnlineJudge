#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int S,D;
    while(scanf("%lld %lld",&S,&D)!=EOF)
    {
        while((D-S)>0)
        {
            D-=S;
            S++;
        }
        printf("%lld\n",S);
    }
    return 0;
}
