#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	int n,len,c,t,line;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		c=t=line=0;
		char s[210],w[210][n];
		cin.getline(s,210);
		len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(c==0)
				w[line][t++]=s[i];
			else if(c==1)
				w[line][t--]=s[i];
			if(t==n&&c==0)
			{
				line++;
				c=1;
				t--;
			}
			else if(t==-1&&c==1)
			{	
				line++;
				c=0;
				t++;
			}
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<line;j++)
				printf("%c",w[j][i]);
		printf("\n");
	}
	return 0;
}
