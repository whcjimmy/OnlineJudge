#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int p[800];
double w[800][800], d[800];
bool isvisited[800];
struct Node
{
    double x, y;
}node[800];
int main()
{
    int N, M, a;
    double min;
    while(scanf("%d", &N) != EOF)
    {
	for(int i=1; i<=N; i++)
	{
	    scanf("%lf%lf", &node[i].x, &node[i].y);
	    isvisited[i] = false;
	    p[i] = -1;
	    d[i] = 2e9;
	}
	d[1] = 0;
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
		w[i][j] = w[j][i] = sqrt(pow(node[i].x - node[j].x, 2) + pow(node[i].y - node[j].y, 2));
	scanf("%d", &M);
	for(int i=1; i<=M; i++)
	{
	    int t1, t2;
	    scanf("%d%d", &t1, &t2);
	    w[t1][t2] = w[t2][t1] = 0;
	}
	for(int i=1; i<=N; i++)
	{
	    a = -1;
	    min = 2e9;
	    for(int j=1; j<=N; j++)
		if(!isvisited[j] && d[j] < min)
		{
		    a = j;
		    min = d[j];
		}
	    if(a == -1)
		break;
	    isvisited[a] = true;
	    for(int k=1; k<=N; k++)
		if(!isvisited[k] && w[a][k] < d[k])
		{
		    d[k] = w[a][k];
		    p[k] = a;
		}
	}
	min = 0;
	for(int i=1; i<=N; i++)
	    min += w[p[i]][i];
	printf("%.2lf\n", min);
    }
    return 0;
}
