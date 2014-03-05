#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

double d[105], w[105][105];
bool visited[105];
typedef struct 
{
    double x, y;
}Node;
int main()
{
    int cases, n, a;
    double min, ans;
    Node node[105];
    scanf("%d", &cases);
    while(cases--)
    {
	ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
	    scanf("%lf%lf", &node[i].x, &node[i].y);
	    d[i] = 2e9;
	    visited[i] = false;
	}
	for(int i=0; i<n; i++)
	    for(int j=0; j<n; j++)
		w[i][j] = sqrt(pow((node[i].x - node[j].x), 2) + pow((node[i].y - node[j].y), 2));
	d[0] = 0;
	for(int i=0; i<n; i++)
	{
	    a = -1;
	    min = 2e9;
	    for(int j=0; j<n; j++)
		if(!visited[j] && d[j] < min)
		{
		    a = j;
		    min = d[j];
		}
	    if(a == -1)
		break;
	    visited[a] = true;
	    for(int k=0; k<n; k++)
		if(!visited[k] && w[a][k] < d[k])
		    d[k] = w[a][k];
	}
	for(int i=0; i<n; i++)
	    ans += d[i];
	printf("%.2lf\n", ans);
	if(cases)
	    printf("\n");
    }
    return 0;
}

