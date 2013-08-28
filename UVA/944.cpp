#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int main()
{
    int L, H, c, times,ishappy, isunhappy;
    long long int num, temp;
    map<int,int> happy;
    map<int,int> unhappy;
    map<int,int>::iterator it;

    c = 0;
    happy.insert(pair<int,int>(1,1));
    unhappy.insert(pair<int,int>(4,0));
    for(int i=2; i<=99999; i++)
    {
	temp = isunhappy = ishappy = 0;
	times = 1;
	num = i;
	while(num != 1)
	{
	    temp = 0;
	    while(num !=  0)
	    {
		temp += (num%10)*(num%10);
		num = (num - num%10)/10;
	    }
	    num = temp;
	    it = unhappy.find(num);
	    if(num == i || it != unhappy.end())
	    {
		unhappy.insert(pair<int,int>(i,0));
		isunhappy = 1;
		break;
	    }
	    it = happy.find(num);
	    if(num != 1 && it != happy.end())
	    {
		happy.insert(pair<int,int>(i,times+it->second));
		ishappy = 1;
		break;
	    }
	    times++;
	}
	if(!isunhappy )
	    happy.insert(pair<int,int>(i, times));
    }

    while(scanf("%d%d", &L, &H) != EOF)
    {
	if(c != 0)
	    printf("\n");
	for(int i = L; i<=H; i++)
	{
	    it = happy.find(i);
	    if(it != happy.end())
		printf("%d %d\n", it->first, it->second);
	}
	if(c == 0)
	    c = 1;
    }
    return 0;
}
