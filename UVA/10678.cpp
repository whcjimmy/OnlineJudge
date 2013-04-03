#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int N;
	double D,L,pi=2*acos(0),a,b,result;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%lf%lf",&D,&L);
		a=L/2;
		b=sqrt((L/2)*(L/2)-(D/2)*(D/2));
		result=a*b*pi;
		printf("%.3lf\n",result);
	}
	return 0;
}
