#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int times,cases,temp,i,j,k,t;
	while(scanf("%d",&times)!=EOF)
		for(t=0;t<times;t++)
		{
			scanf("%d",&cases);
			char c[100000];
			map<int,int> mymap;
			map<int,int> ::iterator it;
			for(i=0;i<cases;i++)
			{
				temp=j=0;
				scanf("%s",c);
				while(c[j]!='\0')
				{
					if(c[j]!='-')
						if(c[j]<58) temp=temp*10+c[j]-48;
						else
							switch(c[j])
							{
							case 'A':
							case 'B':
							case 'C':
								temp=temp*10+2;
								break;
							case 'D':
							case 'E':
							case 'F':
								temp=temp*10+3;
								break;
							case 'G':
							case 'H':
							case 'I':
								temp=temp*10+4;
								break;
							case 'J':
							case 'K':
							case 'L':
								temp=temp*10+5;
								break;
							case 'M':
							case 'N':
							case 'O':
								temp=temp*10+6;
								break;
							case 'P':
							case 'R':
							case 'S':
								temp=temp*10+7;
								break;
							case 'T':
							case 'U':
							case 'V':
								temp=temp*10+8;
								break;
							case 'W':
							case 'X':
							case 'Y':
								temp=temp*10+9;
								break;
							}
					j++;
				}
				if(mymap.find(temp)!=mymap.end())
					mymap[temp]++;
				else
					mymap.insert(pair<int,int>(temp,0));
			}
			i=0;
			for(it=mymap.begin();it!=mymap.end();++it)
				if(it->second!=0)
				{
					printf("%d-%d %d\n",it->first/10000,it->first%10000,it->second+1);
					i=1;
				}
			if(i==0)
				printf("No duplicates.\n");
			if(t!=(times-1))
				printf("\n");
			mymap.clear();
		}
	return 0;
}
