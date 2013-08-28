#include<cstdio>
#include<algorithm>
using namespace std;

char DNA[101][51];
struct NODE
{
    int number,result;
    bool operator<(const NODE&t)const
    {
	if(result==t.result&&number<t.number)
	    return true;
	if(result<t.result)
	    return true;
	return false;
    }
}r[101];
int main()
{
    int a,n,m,i,j,k,t;
    while(scanf("%d",&a)!=EOF)
    {
	for(t=0;t<a;t++)
	{
	    scanf("%d%d",&n,&m);
	    for(i=0;i<m;i++)
	    {
		scanf("%s",DNA[i]);
		r[i].number=i;
		r[i].result=0;
	    }
	    getchar();
	    for(i=0;i<m;i++)
		for(j=0;j<(n-1);j++)
		    for(k=j+1;k<n;k++)
			if(DNA[i][j]>DNA[i][k])
			    r[i].result++;
	    sort(r,r+m);
	    for(i=0;i<m;i++)
		printf("%s\n",DNA[r[i].number]);
	    if(t!=(a-1))	printf("\n");
	}
    }
    return 0;
}

