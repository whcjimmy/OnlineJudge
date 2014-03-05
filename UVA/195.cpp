#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

int length;
char str[1000];
bool cmp(const char &a,const char &b)
{
    int temp = tolower(a) - tolower(b);
    return temp ? temp<0 : a<b;
}
int main()
{
    int cases;
    scanf("%d", &cases);
    getchar();
    while(cases--)
    {
	scanf("%s", str);
	length = strlen(str);
	sort(str, str+length, cmp);
	do
	{
	    printf("%s\n", str);
	}while(next_permutation(str, str+length, cmp));
    }
    return 0;
}
