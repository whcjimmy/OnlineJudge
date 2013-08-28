#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int T, t, count, temp, temp2, sum, ans;
    char str[1002];
    t = 0;
    scanf("%d", &T);
    while(T--)
    {
	cin>>str;
	count = temp = sum = ans = 0;
	for(int i=0; i<strlen(str); i++)
	{
	    sum += str[i]- '0';
	    if((str[i] - '0') % 3 == 0)
		count++;
	}
	for(int i=0; i<strlen(str); i++)
	{
	    temp2 = sum - (str[i] - '0');
	    temp = count;
	    if(temp2 % 3 == 0)
	    {
		if((str[i] - '0') % 3 == 0)
		    temp--;
		if(temp % 2 == 0)
		{
		    ans = 1;
		    break;
		}
	    }
	}
	if(ans == 1)
	    printf("Case %d: S\n", ++t);
	else
	    printf("Case %d: T\n", ++t);
    }
    return 0;
}
