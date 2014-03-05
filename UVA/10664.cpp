#include<cstdio>
#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>
using namespace std;

int w[20], dp[205];
int main()
{
    int t, temp, n, total;
    string line;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
	n = total = 0;
	memset(w, 0, sizeof(w));
	memset(dp, 0 ,sizeof(dp));
	getline(cin, line);
	istringstream stream(line);
	while(stream>>w[n])	
	    total += w[n++];
	dp[0] = 1;
	if(total == 0)
	    printf("No\n");
	else if(total%2 == 0)
	{
	    total /= 2;
	    for(int i=0; i<n; i++)
		for(int j=total; j>=w[i]; j--)
		    if(dp[j-w[i]] == 1)
			dp[j] = dp[j-w[i]];
	    if(dp[total] == 1)
		printf("YES\n");
	    else
		printf("NO\n");
	}
	else
	    printf("NO\n");
    }
    return 0;
}
