#include<cstdio>
#include<algorithm>
using namespace std;

int solution[6],number[14];
bool used[14]={false};
void permutation(int a,int n);
int main()
{
    int k,i,j,c=0;
    while(scanf("%d",&k)&&k!=0)
    {
	for(i=0;i<14;i++)
	    used[i]=false;
	if(c==0)
	    c++;
	else
	    printf("\n");
	for(i=0;i<k;i++)
	    scanf("%d",&number[i]);
	sort(number,number+k);
	permutation(0,k);
    }
    return 0;
}

void permutation(int a,int n)
{
    if(a==6)
    {
	for(int i=0;i<6;i++)
	{
	    printf("%d",solution[i]);
	    if(i!=5)
		printf(" ");
	}
	printf("\n");
    }
    else
	for(int i=0;i<n;i++)
	    if(!used[i]&&number[i]>solution[a-1])
	    {
		used[i]=true;
		solution[a]=number[i];
		permutation(a+1,n);
		used[i]=false;
	    }
}
