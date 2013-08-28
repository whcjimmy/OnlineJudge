#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int i,n,x,y,dif,step;
    while(scanf("%lld",&n)!=EOF)
	for(i=0;i<n;i++)
	{
	    scanf("%lld%lld",&x,&y);
	    dif=y-x;
	    if(dif==0)
		printf("0\n");
	    else
	    {
		step=(int)sqrt(dif);
		if(step*step==dif)
		    step=step*2-1;
		else if(step*(step+1)<dif)
		    step=step*2+1;
		else
		    step=step*2;
		printf("%lld\n",step);
	    }
	}
    return 0;
}
