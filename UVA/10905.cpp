#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

struct NODE
{
    char s[200];
};
bool cmp(NODE ,NODE );
int main()
{
    long long int N,i,temp;
    while(scanf("%lld",&N)!=EOF&&(N!=0))
    {
	NODE a[N];
	for(i=0;i<N;i++)
	    scanf("%s",a[i].s);
	sort(a,a+N,cmp);
	for(i=0;i<N;i++)
	    printf("%s",a[i].s);
	printf("\n");
    }
    return 0;
}

bool cmp(NODE a,NODE b)
{
    return strcmp(strcat(a.s,b.s),strcat(b.s,a.s))>0;
}
