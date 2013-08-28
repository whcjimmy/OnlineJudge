#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int used[16000001], word[128];
int main()
{
    int N, NC, length, count;
    long long int test;
    char str[1000000];
    while(scanf("%d%d", &N, &NC) != EOF)
    {
	memset(used, 0, sizeof(used));
	memset(word, -1, sizeof(word));
	scanf("%s", str);
	test = count = 0;
	length = strlen(str);
	for(int i=0; i<length; i++)
	    if(word[int(str[i])] == -1)
		word[int(str[i])] = count++;
	count = 0;
	for(int i=0; i<N; i++)
	    test += word[int(str[i])]*(int)pow((double)NC, (N-i-1));
	for(int i=0; i<=(length - N); i++)
	{
	    if(used[test] == 0)
	    {
		count++;
		used[test] = 1;
	    }
	    test -= word[int(str[i])]*(int)pow((double)NC, (N-1));
	    test *= NC;
	    test += word[int(str[i+N])];
	}
	printf("%d\n", count);
    }
    return 0;
}
