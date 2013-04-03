#include<stdio.h>
#include<math.h>

long long int SWAP(long long int ,long long int );
long long int quicksort(long long int,long long int);
long long int s[500];

int main()
{
    long long int T,r,i,j,temp,count;
    scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		count=0;
		scanf("%lld",&r);
        for(j=0;j<r;j++)
			scanf("%lld",&s[j]);
		quicksort(0,r-1);
		temp=r/2;
		for(j=0;j<r;j++)
			count+=abs(s[j]-s[temp]);
		printf("%lld\n",count);
    }
    return 0;
}

long long int SWAP(long long int a,long long int b)
{
    long long int temp;
    temp=s[b];
    s[b]=s[a];
	s[a]=temp;
}

long long int quicksort(long long int left,long long int right)
{
	long long int i,j;
	if(left<right)
	{
		i=left;
		j=right+1;
		do{
			while(s[++i]<s[left]);
			while(s[--j]>s[left]);
			if(i>=j)
				break;
			SWAP(i,j);
		}while(i<j);
		SWAP(left,j);
		quicksort(left,j-1);
		quicksort(j+1,right);
	}
}		
