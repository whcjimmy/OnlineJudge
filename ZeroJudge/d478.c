#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int m,n,i,j,k;
	while(scanf("%lld %lld",&n,&m)!=EOF){
		long long int num[2][m],count=0,p;
		for(i=0;i<n;i++){
			for(j=0;j<2;j++)
				for(k=0;k<m;k++)
				scanf("%lld",&num[j][k]);
			count=p=0;
			for(j=0;j<m;j++)
				for(k=p;k<m;k++)
					if(num[0][j]==num[1][k])
					{
						count++;
						p=k;
					}
					else if(num[0][j]<num[1][k])
						break;
					
			printf("%lld\n",count);
		}
	}
	return 0;
}
	
