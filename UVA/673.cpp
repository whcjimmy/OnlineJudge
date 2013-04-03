#include<cstdio>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
	int i,j,n,length,check;
	char s[130];
	stack <char> stk;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for(i=0;i<n;i++)
		{
			fgets(s,130,stdin);
			check=j=0;
			if(s[0]=='\n')
				printf("Yes\n");
			else
			{
				while(s[j]!='\n')
				{
					if(s[j]=='('||s[j]=='[')
						stk.push(s[j]);
					else if(!stk.empty())
					{
						if((s[j]==')'&&stk.top()=='(')||(s[j]==']'&&stk.top()=='['))
							stk.pop();
						else
						{
							printf("No\n");
							check=1;
							break;
						}
					}
					else
					{
						printf("No\n");
						check=1;
						break;	
					}
					j++;
				}
				if(check==0)
					if(stk.empty())
						printf("Yes\n");
					else
						printf("No\n");
			}
			while(!stk.empty())
				stk.pop();
		}
		
	}
	return 0;
}
