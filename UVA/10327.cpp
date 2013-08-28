#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int N,M;
    while(scanf("%d",&N)!=EOF)
    {
	M=0;
	int a[N],i,j;
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	    for(j=(N-1);j>i;j--)
		if(a[j]<a[j-1])
		{
		    swap(a[j],a[j-1]);
		    M++;
		}
	printf("Minimum exchange operations : %d\n",M);
    }
    return 0;
}

