#include<stdio.h>

int main()
{
    long long int N,i,j,temp;
    while(scanf("%lld",&N)!=EOF)
    {
        long long int m[N];
        for(i=0;i<N;i++)
            scanf("%lld",&m[i]);
        for(i=0;i<N;i++)
            for(j=i+1;j<N;j++)
                if(m[i]>m[j])
                {
                    temp=m[j];
                    m[j]=m[i];
                    m[i]=temp;
                }
        printf("%lld\n",m[(N+1)/2-1]);
    }
    return 0;
}
        
