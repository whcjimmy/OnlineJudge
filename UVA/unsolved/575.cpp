#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
    char str[50];
    long long int num, p;
    while(scanf("%s", str) != EOF)
    {
	if(str[0] == '0')
	    break;
	num = 0;
	p = strlen(str);
	for(int i=0; i<strlen(str); i++)
	    num += (str[i] - 48)*((long long int)pow(2, p--) - 1);
	printf("%lld\n", num);
    }
    return 0;
}
