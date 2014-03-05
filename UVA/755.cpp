#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<map>
using namespace std;

void set_digit();
map<char, char> digit;
int main()
{
    int T, N, t, a;
    char s[9];
    string str, temp;
    map<string, int> mymap;
    map<string, int>::iterator it;
    set_digit();
    a = 0;

    cin>>T;
    while(T--)
    {
	mymap.clear();
	cin>>N;
	while(N--)
	{
	    t = 0;
	    memset(s, 0, sizeof(s));
	    s[3] = '-';
	    s[8] = '\0';
	    cin>>str;
	    for(int i=0; i<str.length(); i++)
		if(str[i] != '-')
		{
		    if(t == 3) t++;
		    s[t++] = digit.find(str[i])->second;
		    if(t == 8) break;
		}
	    string temp(s);
	    if(mymap.find(temp) == mymap.end())
		mymap.insert(pair<string, int>(temp, 1));
	    else
		mymap[temp]++;
	}
	if(a) cout<<endl;
	a = 1;

	t = 0;
	for(it = mymap.begin(); it != mymap.end(); ++it)
	    if(it->second != 1)
	    {
		cout<<it->first<<" "<<it->second<<endl;
		t++;
	    }
	if(t == 0)
	    cout<<"No duplicates.\n";
    }
    return 0;
}

void set_digit()
{
    digit.insert(pair<char, char>('0', '0'));
    digit.insert(pair<char, char>('1', '1'));
    digit.insert(pair<char, char>('2', '2'));
    digit.insert(pair<char, char>('3', '3'));
    digit.insert(pair<char, char>('4', '4'));
    digit.insert(pair<char, char>('5', '5'));
    digit.insert(pair<char, char>('6', '6'));
    digit.insert(pair<char, char>('7', '7'));
    digit.insert(pair<char, char>('8', '8'));
    digit.insert(pair<char, char>('9', '9'));
    digit.insert(pair<char, char>('A', '2'));
    digit.insert(pair<char, char>('B', '2'));
    digit.insert(pair<char, char>('C', '2'));
    digit.insert(pair<char, char>('D', '3'));
    digit.insert(pair<char, char>('E', '3'));
    digit.insert(pair<char, char>('F', '3'));
    digit.insert(pair<char, char>('G', '4'));
    digit.insert(pair<char, char>('H', '4'));
    digit.insert(pair<char, char>('I', '4'));
    digit.insert(pair<char, char>('J', '5'));
    digit.insert(pair<char, char>('K', '5'));
    digit.insert(pair<char, char>('L', '5'));
    digit.insert(pair<char, char>('M', '6'));
    digit.insert(pair<char, char>('N', '6'));
    digit.insert(pair<char, char>('O', '6'));
    digit.insert(pair<char, char>('P', '7'));
    digit.insert(pair<char, char>('R', '7'));
    digit.insert(pair<char, char>('S', '7'));
    digit.insert(pair<char, char>('T', '8'));
    digit.insert(pair<char, char>('U', '8'));
    digit.insert(pair<char, char>('V', '8'));
    digit.insert(pair<char, char>('W', '9'));
    digit.insert(pair<char, char>('X', '9'));
    digit.insert(pair<char, char>('Y', '9'));
}
