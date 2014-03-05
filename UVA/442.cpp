#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;

struct ma 
{
    char name;
    int m[2];
};
int main()
{
    int n, ans, f;
    char s[300];
    ma mat[30];
    stack<ma> stk;
    ma temp, a, b;
    while(scanf("%d", &n) != EOF)
    {
	ans = f = 0;
	while(!stk.empty())
	    stk.pop();
	for(int i=0; i<n; i++)
	    cin>>mat[i].name>>mat[i].m[0]>>mat[i].m[1];
	while(scanf("%s", s) != EOF)
	{
	    ans = f = 0;
	    for(int i=0; i<strlen(s); i++)
	    {
		if(!f)
		if(s[i] == '(')
		{
		    temp.name = '(';
		    temp.m[0] = 0, temp.m[1] = 0;
		    stk.push(temp);
		    a.name = b.name = ' ';
		    memset(a.m, 0, sizeof(a.m));
		    memset(b.m, 0, sizeof(b.m));
		}
		else if(s[i] == ')')
		{
		    while(1)
		    {
			if(stk.top().name == '(')
			{
			    stk.pop();
			    break;
			}
			temp = stk.top();
			stk.pop();
			if(b.name == ' ')
			{
			    b.name = temp.name;
			    b.m[0] = temp.m[0];
			    b.m[1] = temp.m[1];
			}
			else
			{
			    a.name = temp.name;
			    a.m[0] = temp.m[0];
			    a.m[1] = temp.m[1];
			}
			if((a.name != ' ') && (b.name != ' '))
			{
			    if(a.m[1] != b.m[0])
				f = 1;
			    ans += a.m[0]*a.m[1]*b.m[1];
			    temp.name = '=';
			    temp.m[0] = a.m[0], temp.m[1] = b.m[1];
			    a.name = b.name = ' ';
			    memset(a.m, 0, sizeof(a.m));
			    memset(b.m, 0, sizeof(b.m));
			    if(stk.top().name == '(')
			    {
				stk.pop();
				stk.push(temp);
				break;
			    }
			    else
			        stk.push(temp);
			}
		    }
		}
		else
		    for(int j=0; j<n; j++)
			if(s[i] == mat[j].name)
			{
			    temp.name = mat[j].name;
			    temp.m[0] = mat[j].m[0], temp.m[1] = mat[j].m[1];
			    stk.push(temp);
			}
	    }
	    if(!f)
		printf("%d\n", ans);
	    else
		printf("error\n");
	}
    }
    return 0;
}
