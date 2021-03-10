//92 Sereja and Suffixes
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int dp[n];
	set<long long int > st;
	for(int i=n-1;i>=0;i--)
	{
		st.insert(a[i]);
		dp[i]=st.size();
	}
	while(m--)
	{
		set<long long int > st;
		long long int l;
		cin>>l;
		cout<<dp[l-1]<<endl;
	}
    return 0;
}
