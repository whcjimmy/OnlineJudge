#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Soldier
{
    int B, J;
}s[1002];

bool cmp(Soldier a, Soldier b)
{
    return a.J > b.J;
}

int main()
{
    int N, temp, time, cases;
    cases = 1;
    while(scanf("%d", &N) != EOF)
    {
	if(N == 0)
	    break;
	else
	{
	    time = temp = 0;
	    for(int i=0; i<N; i++)
		scanf("%d%d", &s[i].B, &s[i].J);
	    sort(s, s+N, cmp);
	    for(int i=0; i<N; i++)
	    {
		temp += s[i].B;
		time = max(time, temp+s[i].J);
	    }
	    printf("Case %d: %d\n", cases++, time);    
	}
    }
    return 0;
}

