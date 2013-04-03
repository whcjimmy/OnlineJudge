#include<cstdio>
#include<map>
using namespace std;

int main()
{
	int n,t1,t2,i;
	while(scanf("%d",&n)&&n!=0)
	{
		map<int,int> mymap;
		map<int,int> mymap2;
		map<int,int> ::iterator it;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&t1,&t2);
			it=mymap2.find(t1);
			if(it!=mymap2.end()) mymap2.erase(it);
			else mymap.insert(pair<int,int>(t1,0));
			it=mymap.find(t2);
			if(it!=mymap.end()) mymap.erase(it);
			else mymap2.insert(pair<int,int>(t2,0));
		}
		if(mymap.empty()&&mymap2.empty())
			printf("Yes\n");
		else
			printf("No\n");
		mymap.clear();
		mymap2.clear();
	}
	return 0;
}


