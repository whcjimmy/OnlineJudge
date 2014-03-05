#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int o[31], s[31];
int main()
{
    int num, temp;
    char str[5000];
    while(gets(str))
    {
	num = temp = 0;
	printf("%s\n", str);
	for(int i=0; i<strlen(str); i++)
	    if(str[i] != 32 && str[i] != '\n')
		temp = temp*10 + str[i] - '0';
	    else
	    {
		o[num++] = temp;
		temp = 0;
	    }
	o[num++] = temp;
	for(int i=0; i<num; i++)
	    s[i] = o[i];
	sort(s, s+num);
	for(int i = num-1; i > 0; i--)
	{
	    if(o[i] == s[i])
		continue;
	    for(int j = i-1; j > 0; j--)
		if(o[j] == s[i])
		{
		    for(int k = 0, l = j; k < l; k++, l--)
			swap(o[k], o[l]);
		    printf("%d ", num-j);
		}
	    for(int k = 0, l = i; k < l; k++, l--)
		swap(o[k], o[l]);
	    printf("%d ", num-i);
	}
	printf("0\n");
    }
     return 0;
}

