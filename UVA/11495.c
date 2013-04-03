#include<stdio.h>
#include<stdlib.h>
#define MAX 200001

int count=0;
int a[MAX];
void MergeSort(int [],int,int);
void merge(int [],int,int);
int main()
{
	int N;
	while(scanf("%d",&N)!=EOF&&N!=0)
	{
		int i,j,k;
		count=0;
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
		MergeSort(a,0,N-1);
		if(count%2)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}
	return 0;
}

void MergeSort(int a[],int low,int high)
{
	int k;
	if(high>low)
	{
		MergeSort(a,low,(low+high)/2);
		MergeSort(a,1+(low+high)/2,high);
		merge(a,low,high);
	}
}

void merge(int a[],int low,int high)
{
	int b[MAX],i,j,k=-1,mid=(low+high)/2;
	for(i=low,j=mid+1;i<=mid||j<=high;)
	{
		if(i>(low+high)/2)	b[++k]=a[j++];
		else if (j>high){	b[++k]=a[i++];}
		else if(a[i]>=a[j]){	b[++k]=a[j++]; count+=mid-i+1;}
		else	b[++k]=a[i++];
	}
	k=0;
	for(i=low;i<=high;i++) a[i]=b[k++];
}


