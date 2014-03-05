#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int n, r, input;
    long long int total;
    cin>>n;
    total = r = 0;
    for(int i=0; i<n; i++)
    {
	cin>>input;
	if(input == 1)
	    r++;
	else if(input == 0)
	    total += r;
    }
    cout<<total<<endl;
    return 0;
}

