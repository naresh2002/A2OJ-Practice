//24 Slightly Decreasing Permutations
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		cout<<n-i<<" ";
	}
	for(int i=0;i<n-k;i++)
	{
		cout<<i+1<<" ";
	}
	return 0;
}
