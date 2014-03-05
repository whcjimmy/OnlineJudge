#include<cstdio>
#include<cstring>
using namespace std;

int p[22], m[10000][2];
int main()
{
    int t, n, position, temp, check;
    scanf("%d", &t);
    while(t--)
    {
	scanf("%d", &n);
	position = check = 0;
	memset(p, 0, sizeof(p));
	memset(m, 0, sizeof(m));
	for(int i=0; i<n; i++)
	{
	    scanf("%d", &p[i]);
	    if(i == 0)
		for(int j=0; j<p[0]; j++)
		    m[position++][0] = 1;
	    else
		for(int j=0; j<(p[i] - p[i-1]); j++)
		    m[position++][0] = 1;
	    m[position++][0] = 0;
	}
	for(int i=0; i<position; i++)
	{
	    temp = 0;
	    if(m[i][0] == 0)
		for(int j=(i-1); j>=0; j--)
		{
		    if(m[j][0] == 1)
			temp++;
		    if(m[j][0] == 1 && m[j][1] != 1)
		    {
			if(check == 0)
			    printf("%d", temp);
			else
			    printf(" %d", temp);
			check = 1;
			m[j][1] = 1;
			break;
		    }
		}
	}
	printf("\n");
    }
    return 0;
    }
