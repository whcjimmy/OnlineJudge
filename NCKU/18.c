#include<stdio.h>

long long int SWAP(long long int *,long long int ,long long int );
long long int quicksort(long long int *,long long int,long long int);

int main()
{
    long long int n,i,j,temp;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            long long int m[n];
            for(i=0;i<n;i++)
                scanf("%lld",&m[i]);
            quicksort(m,0,n-1);
            for(i=0;i<n;i++)
			{
                printf("%lld",m[i]);
				if(i!=(n-1))
					printf(" ");
			}
        	printf("\n");
		}
    }
    return 0;
}

long long int SWAP(long long int *m,long long int a,long long int b)
{
    long long int temp;
    temp=*(m+b);
    *(m+b)=*(m+a);
    *(m+a)=temp;
}

long long int quicksort(long long int *m,long long int left,long long int right)
{
	long long int i,j;
	if(left<right)
	{
		i=left;
		j=right+1;
		do{
			while(*(m+(++i))<*((m+left)));
			while(*(m+(--j))>*((m+left)));
			if(i>=j)
				break;
			SWAP(m,i,j);
		}while(i<j);
		SWAP(m,left,j);
		quicksort(m,left,j-1);
		quicksort(m,j+1,right);
	}
}		
