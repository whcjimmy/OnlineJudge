#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char a[1010], b[1010], ca[128], cb[128];
int main()
{
    int lena, lenb;
    while(1)
    {
	if(gets(a) == NULL)
	    break;
	gets(b);
	lena = strlen(a);
	lenb = strlen(b);
	memset(ca, 0, sizeof(ca));
	memset(cb, 0, sizeof(cb));
	for(int i=0; i<lena; i++)
	    ca[a[i]]++;
	for(int i=0; i<lenb; i++)
	    cb[b[i]]++;
	for(int i=0; i<128; i++)
	    for(int j=0; j<min(ca[i], cb[i]); j++)
		printf("%c", i);
	printf("\n");
    }
    return 0;
}
