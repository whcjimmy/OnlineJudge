#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    for(int a=0;a<cases;a++)
    {
	int r,position,dis=0;
	scanf("%d",&r);
	int num[r];
	for(int i=0;i<r;i++)
	    scanf("%d",&num[i]);
	sort(num,num+r);
	if(r%2==1)
	{
	    position=num[(r+1)/2-1];
	    for(int i=0;i<r;i++)
		if(i!=((r+1)/2-1))
		    dis+=abs(position-num[i]);
	}
	else
	{
	    position=(int)(num[r/2-1]+num[r/2])/2;
	    for(int i=0;i<r;i++)
		dis+=abs(position-num[i]);
	}
	printf("%d\n",dis);
    }
    return 0;
}
