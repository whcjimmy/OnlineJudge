#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char s[1001];
    int i,j,odd,even,length,check;
    while(scanf("%s",s)!=EOF)
    {
	odd=even=check=0;
	if(s[0]=='0'&&s[1]=='\0')
	    break;
	else
	{
	    length=strlen(s);
	    for(i=0;i<length;i+=2)
		odd+=s[i]-48;
	    for(i=1;i<length;i+=2)
		even+=s[i]-48;
	    if(odd-even<0)
		if((even-odd)%11==0)
		    check=1;
		else check=0;
	    else
		if((odd-even)%11==0)
		    check=1;
		else check=0;
	    if(check)
		printf("%s is a multiple of 11.\n",s);
	    else
		printf("%s is not a multiple of 11.\n",s);
	}
    }
    return 0;
}

