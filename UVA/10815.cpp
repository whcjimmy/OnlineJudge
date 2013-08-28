#include<cstdio>
#include<iostream>
#include<set>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    set <string> myset;
    set <string> ::iterator it;
    int i,j,k;	
    char s[210],temp[210];
    while(cin.getline(s,210))
	if(s[0]!='\0')
	{
	    i=j=0;
	    for(i=0;i<=strlen(s);i++)
		if((s[i]-65)*(s[i]-90)<=0||(s[i]-97)*(s[i]-122)<=0)
		{
		    if(s[i]<=90)
			s[i]+=32;
		    temp[j++]=s[i];
		}
		else
		    if(j!=0)
		    {
			temp[j]='\0';
			myset.insert(temp);
			j=0;
		    }
	}
    for(it=myset.begin();it!=myset.end();it++)
	cout<<*it<<"\n";
    return 0;
}
