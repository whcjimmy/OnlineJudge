#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int used[20];
char s[20],solution[20],temp[20];

void backtrack(int ,int );
int main()
{
    int cases,length,tlength;
    scanf("%d",&cases);
    while(cases--)
    {
	memset(solution,0,sizeof(solution));
	memset(used,0,sizeof(used));
	memset(s,0,sizeof(s));
	memset(temp,0,sizeof(temp));
	scanf("%s",s);
	length=strlen(s);
	tlength=0;
	sort(s,s+length);
	for(int i=0;i<length;i++)
	    if(i==0)
		temp[tlength++]=s[i];
	    else if(s[i]!=s[i-1])
		temp[tlength++]=s[i];
	backtrack(0,tlength);
	printf("\n");
    }
    return 0;
}

void backtrack(int n,int length)
{
    if(n==length)
    {
	solution[length]='\0';
	printf("%s\n",solution);
    }
    else
    {
	for(int i=0;i<length;i++)
	    if(!used[i])
	    {
		used[i]=1;
		solution[n]=temp[i];
		backtrack(n+1,length);
		used[i]=false;
	    }
    }
}
