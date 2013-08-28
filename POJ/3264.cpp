#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int v[50005];
struct node
{
    int high, low;
}tree[3*50005];

void setMax(int ,int ,int );
void setMin(int ,int ,int );
int  findMax(int ,int ,int ,int ,int );
int  findMin(int ,int ,int ,int ,int );
int main()
{
    int N, Q, a, b;
    while(scanf("%d%d", &N, &Q) != EOF)
    {
	memset(v, 0, sizeof(v));
	for(int i=1; i<=N; i++)
	    scanf("%d", &v[i]);
	setMax(1, 1, N);
	setMin(1, 1, N);
	for(int i=0; i<Q; i++)
	{
	    scanf("%d%d", &a, &b);
	    printf("%d\n", findMax(1, 1, N, a, b) - findMin(1, 1, N, a, b));
	}
    }
    return 0;
}

void setMax(int id ,int beg, int end)
{
    if(beg == end)
    {
	tree[id].high = v[beg];
	return;
    }
    int mid = (beg + end)/2;
    setMax(2*id, beg, mid);
    setMax(2*id+1, mid+1, end);
    tree[id].high = max(tree[2*id].high, tree[2*id+1].high);
}

void setMin(int id, int beg, int end)
{
    if(beg == end)
    {
	tree[id].low = v[beg];
	return;
    }
    int mid = (beg + end)/2;
    setMin(2*id, beg, mid);
    setMin(2*id+1, mid+1, end);
    tree[id].low = min(tree[2*id].low, tree[2*id+1].low);
}

int findMax(int id, int beg, int end, int ita, int itb)
{
    if((ita > end) || (itb < beg))
	return 0;
    if(ita <= beg && end <= itb)
	return tree[id].high;
    int lf, rf, mid;
    mid = (beg + end)/2;
    lf = findMax(2*id, beg, mid, ita, itb);
    rf = findMax(2*id+1, mid+1, end, ita, itb);
    return max(lf, rf);
}

int findMin(int id, int beg, int end, int ita, int itb)
{
    if((ita > end) || (itb < beg))
	return 999999;
    if(ita <= beg && end <= itb)
	return tree[id].low;
    int lf, rf, mid;
    mid = (beg + end)/2;
    lf = findMin(2*id, beg, mid, ita, itb);
    rf = findMin(2*id+1, mid+1, end, ita, itb);
    return min(lf, rf);
}
