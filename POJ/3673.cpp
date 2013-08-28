#include<iostream>
using namespace std;
int main()
{
    long long int a,b,total=0;
    int num[2][10]={0},i,j;
    while(cin>>a>>b)
    {
	i=0;
	while(a>0)
	{
	    num[0][i]=a%10;
	    a=(a-a%10)/10;
	    i++;
	}
	i=0;
	while(b>0)
	{
	    num[1][i]=b%10;
	    b=(b-b%10)/10;
	    i++;
	}
	for(i=0;i<10;i++)
	    for(j=0;j<10;j++)
		total+=num[0][i]*num[1][j];
	cout<<total<<endl;
    }
}
