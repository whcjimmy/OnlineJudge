#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int len[2000][2000];

int main()
{
	int len_a,len_b;
	char a[10000],b[10000];
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		len_a=strlen(a);
		len_b=strlen(b);
		memset(len,0,sizeof(len));
		for(int i=0;i<=len_a;i++)
			len[i][0]=0;
		for(int i=0;i<=len_b;i++)
			len[0][i]=0;
		for(int i=0;i<len_a;i++)
			for(int j=0;j<len_b;j++)
				if(a[i]==b[j])
					len[i+1][j+1]=len[i][j]+1;
				else 
					len[i+1][j+1]=max(len[i+1][j],len[i][j+1]);
		printf("%d\n",len[len_a][len_b]);
	}
	return 0;
}
