#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[10005];    
    while(gets(str))
    {
	for(int i=0; i<strlen(str); i++)
	    printf("%c", (char)(str[i] - 7));
	printf("\n");
    }
    return 0;
}
