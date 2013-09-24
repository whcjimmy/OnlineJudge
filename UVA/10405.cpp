#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int len[1005][1005];
int main()
{
    int la, lb, ans;
    char a[1005], b[1005];
    while(gets(a))
    {
	gets(b);
	ans = 0;
	la = strlen(a);
	lb = strlen(b);
	memset(len, 0, sizeof(len));
	for(int i=1; i<=max(la, lb); i++)
	    len[i][1] = 1;
	for(int i=1 ;i<=la; i++)
	    for(int j=1; j<=lb; j++)
		if(a[i-1] == b[j-1])
		    len[i][j] = len[i-1][j-1] + 1;
		else if(len[i-1][j] >= len[i][j-1])
		    len[i][j] = len[i-1][j];
		else
		    len[i][j] = len[i][j-1];
	ans = len[la][lb];
	printf("%d\n", ans);
    }
    return 0;
}
