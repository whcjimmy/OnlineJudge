#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	long long int n1,n2;
	int t1,t2,temp,carry;
	while(scanf("%lld%lld",&n1,&n2)!=EOF)
		if(n1==0&&n2==0)
			break;
		else
		{
			int a[15]={0},b[15]={0};
			t1=t2=carry=0;
			while(n1!=0)
			{
				a[t1++]=n1%10;
				n1=(n1-n1%10)/10;
			}
			while(n2!=0)
			{
				b[t2++]=n2%10;
				n2=(n2-n2%10)/10;
			}
			for(int i=0;i<max(t1,t2);i++)
			{
				temp=a[i]+b[i];
				if(temp>=10)
				{
					carry++;
					a[i+1]+=(temp-temp%10)/10;
				}
			}
			if(carry==0)
		  		 printf("No carry operation.\n");
			else if(carry==1)
		   		printf("1 carry operation.\n");
			else
   		 		printf("%d carry operations.\n",carry);
		}
	return 0;
}

