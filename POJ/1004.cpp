#include<iostream>
using namespace std;
int main()
{
    double i,temp,total=0;
    for(i=0;i<12;i++)
    {
     cin>>temp;
     total+=temp;
    }
    cout<<"$"<<total/12;
}
