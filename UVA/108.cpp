#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int m[101][101];
int main()
{
    int N, v;
    long long int sol;
    while(cin>>N)
    {
	memset(m, 0, sizeof(m));
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
	    {
		cin>>v;
		m[i][j] = m[i-1][j] + m[i][j-1] - m[i-1][j-1] + v;
	    }
	sol = -9999999;
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
		for(int k=i; k<=N; k++)
		    for(int l=j; l<=N; l++)
			if((m[k][l] - m[i-1][l] - m[k][j-1] + m[i-1][j-1]) > sol)
				sol = m[k][l] - m[i-1][l] - m[k][j-1] + m[i-1][j-1];
	cout<<sol<<endl;
    }
    return 0;
}
