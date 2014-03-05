#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int num[100005];
int main()
{
    int N, K, temp;
    string str;
    while(cin>>N)
    {
	memset(num, 0, sizeof(num));
	for(int i=0; i<N; i++)
	    cin>>num[i];
	sort(num, num+N);
	cin>>str;
	cin>>K;
	for(int i=0; i<K; i++)
	{
	    cin>>temp;
	    cout<<num[temp-1]<<endl;
	}
    }
    return 0;
}
