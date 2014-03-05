#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
using namespace std;

int main()
{
    char str[1000], str1[1000], str2[1000];
    map<string, string> dict;
    map<string, string>:: iterator it;
    while(gets(str) && str[0] != '\0')
    {
	sscanf(str, "%s%s", str1, str2);
	dict.insert(pair<string, string>(str2, str1));
    }
    while(scanf("%s", str1) != EOF)
    {
	if(dict.find(str1) != dict.end())
	    cout<<dict[str1]<<endl;
	else
	    printf("eh\n");
    }
    return 0;
}
