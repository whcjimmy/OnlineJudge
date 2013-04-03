#include<cstdio>
#include<cstring>
using namespace std;

long long int matrix[21][21][21];
long long int w(long long int ,long long int ,long long int );

int main()
{
	memset(matrix,-1,sizeof(matrix));
	long long int a,b,c;
	while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
	{
		if(a==-1&&b==-1&&c==-1)
			break;
		else
			printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
	}
	return 0;
}
long long int w(long long int a,long long int b,long long int c)
{
		if(a<=0||b<=0||c<=0)
			return 1;
		else if(a>20||b>20||c>20)
			return w(20,20,20);
		if(matrix[a][b][c]!=-1)
			return matrix[a][b][c];
		else if((a<b)&&(b<c))
			return matrix[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		else 
			return matrix[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}

