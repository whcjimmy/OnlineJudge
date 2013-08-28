#include<cstdio>
using namespace std;

bool lineintersect();
void findsolution();
double ax, bx, cx, dx, ay, by, cy, dy, mx, my ,nx, ny;
double sx, sy;
int main()
{
    int N;
    scanf("%d", &N);
    printf("INTERSECTING LINES OUTPUT\n");
    for(int i=0; i<N; i++)
    {
	sx = sy = 0;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
	mx = bx - ax;
	my = by - ay;
	nx = dx - cx;
	ny = dy - cy;
	if((mx*ny - nx*my) == 0)
	    if(lineintersect() == true)
		printf("LINE\n");
	    else
		printf("NONE\n");
	else 
	{
	    findsolution();
	    printf("POINT %.2lf %.2lf\n", sx, sy);
	}
    }
    printf("END OF OUTPUT\n");
    return 0;
}

bool lineintersect()
{
    nx = cx - ax;
    ny = cy - ay;
    if((mx*ny - nx*my) == 0)
	return true;
    else
	return false;
}

void findsolution()
{
    double a, b, c, d, e, f;
    a = by - ay;
    b = bx*ay - ax*by;
    c = bx - ax;
    d = dy - cy;
    e = dx*cy - cx*dy;
    f = dx - cx;
    sy = (a*e - b*d)/(a*f - c*d);
    sx = (sy*c - b)/a;
}
