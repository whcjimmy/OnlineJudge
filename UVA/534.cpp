#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

double w[210][210];
typedef struct 
{
    double x, y;
}Node;
int main()
{
    int cases, n, a;
    Node node[210];
    cases = 1;
    while(scanf("%d", &n))
	if(n == 0)
	    break;
	else
	{
	    memset(w, 0, sizeof(w));
	    for(int i=0; i<n; i++)
		scanf("%lf%lf", &node[i].x, &node[i].y);
	    for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		    if(i == j)
			w[i][j] = w[j][i] = 0;
		    else
			w[i][j] = w[j][i] = sqrt(pow((node[i].x - node[j].x), 2) + pow((node[i].y - node[j].y), 2));
	    for(int k=0; k<n; k++)
		for(int i=0; i<n; i++)
		    for(int j=0; j<n; j++)
			w[i][j] = min(w[i][j], max(w[i][k], w[k][j]));
	    printf("Scenario #%d\nFrog Distance = %.3lf\n\n", cases++, w[0][1]);
	}
    return 0;
}
