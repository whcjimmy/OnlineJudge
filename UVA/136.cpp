#include<cstdio>
#include<cstring>
using namespace std;

int u[1505];
int main()
{
    memset(u, 0, sizeof(u));
    int two, three, five, count;
    two = three = five = 1;
    count = 2;
    u[1] = 1;
    while(count <= 1500)
    {
	if((u[two]*2<=u[three]*3) && (u[two]*2<=u[five]*5))
	    if(u[count-1] < u[two]*2)
		u[count++] = u[two++]*2;
	    else
		two++;
	else if((u[three]*3<=u[two]*2) && (u[three]*3<=u[five]*5))
	    if(u[count-1] < u[three]*3)
		u[count++] = u[three++]*3;
	    else
		three++;
	else if((u[five]*5<=u[two]*2) && (u[five]*5<=u[three]*3))
	    if(u[count-1] < u[five]*5)
		u[count++] = u[five++]*5;
	    else
		five++;
    }
    printf("The 1500'th ugly number is %d.\n", u[1500]);
    return 0;
}
