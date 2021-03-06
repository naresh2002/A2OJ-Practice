//75 Fence
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	long long int h[n],sum1 = 0;
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
		if(i<k)
		sum1+=h[i];
	}
	long long int min1 = sum1,idx = 1;
	for(int i=1;i<n-k+1;i++)
	{
		sum1+=h[i+k-1];
		sum1-=h[i-1];
		if(sum1<min1)
		{
			min1 = sum1;
			idx = i+1;
		}
	}
	cout<<idx;
    return 0;
}
