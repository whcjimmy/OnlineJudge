#include<iostream>
#include<string>
#include<cctype>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<string> myset;
    set<string>::iterator its;
    map<string, int> mymap;
    map<string, string> ans;
    map<string, int>::iterator it;
    map<string, string>::iterator itt;
    string words, temp;
    while(cin>>words)
    {
	if(words == "#")
	    break;
	temp = words;
	for(int i=0; i<temp.length(); i++)
	    temp[i] = tolower(temp[i]);
	sort(temp.begin(), temp.end());
	ans.insert(pair<string, string>(words, temp));
	if(mymap.find(temp) == mymap.end())
	    mymap.insert(pair<string, int>(temp, 1));
	else
	    mymap[temp]++;
    }
    for(it = mymap.begin(); it != mymap.end(); ++it)
	if(it->second == 1)
	    for(itt = ans.begin(); itt != ans.end(); ++itt)
		if(itt->second == it->first)
		{
		    myset.insert(itt->first);
		    break;
		}
    for(its = myset.begin(); its != myset.end(); ++its)
	cout<<*its<<endl;
    return 0;
}
