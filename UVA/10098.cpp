#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int used[20];
char s[20],solution[20];

void backtrack(int ,int );
int main()
{
    int cases,length;
    scanf("%d",&cases);
    while(cases--)
    {
	memset(solution,0,sizeof(solution));
	memset(used,0,sizeof(used));
	memset(s,0,sizeof(s));
	scanf("%s",s);
	length=strlen(s);
	sort(s,s+length);
	backtrack(0,length);
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
		solution[n]=s[i];
		backtrack(n+1,length);
		used[i]=false;
	    }
    }
}
