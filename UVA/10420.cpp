#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int n;
    string str, str2;
    map<string, int> mymap;
    map<string, int>::iterator it;
    cin>>n;
    for(int i=0; i<n; i++)
    {
	cin>>str;
	if(mymap.find(str) == mymap.end())
	    mymap.insert(pair<string, int>(str, 1));
	else
	    mymap[str]++;
	getline(cin, str2);
    }
    for(it = mymap.begin(); it != mymap.end(); ++it)
	cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
