#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    string str, temp;
    map<string, string> mymap, output;
    map<string, string>::iterator it;
    mymap.clear();
    output.clear();
    while(1)
    {
	cin>>str;
	temp = str;
	if(str == "XXXXXX")
	    break;
	sort(temp.begin(), temp.end());
	mymap.insert(pair<string, string>(str, temp));
    }
    while(1)
    {
	output.clear();
	cin>>str;
	if(str == "XXXXXX")
	    break;
	sort(str.begin(), str.end());
	for(it = mymap.begin(); it != mymap.end(); ++it)
	    if(it->second == str)
		output.insert(pair<string, string>(it->first, it->first));
	if(output.size() == 0)
	    cout<<"NOT A VALID WORD"<<endl;
	else
	    for(it = output.begin(); it != output.end(); ++it)
		cout<<it->first<<endl;
	cout<<"******"<<endl;
    }
    return 0;
}
