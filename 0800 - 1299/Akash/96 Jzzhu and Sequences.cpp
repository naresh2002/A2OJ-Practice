//96 Jzzhu and Sequences
#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int x,y,n;
	cin>>x>>y>>n;
	if(n%3==0)
	{
		if(n%2!=0)
		{
			long long int x1 = (y-x)%mod;
			cout<<(x1+mod)%mod;
		}
		else
		{
			long long int x1 = (x-y)%mod;
			cout<<(x1+mod)%mod;
		}
	}
	else if(n%3==1)
	{
		if(n%2!=0)
		{
			long long int x1 = x%mod;
			cout<<(x1+mod)%mod;
		}
		else
		{
			long long int x1 = (-x)%mod;
			cout<<(x1+mod)%mod;
		}
	}
	else
	{
		if(n%2!=0)
		{
			long long int x1 = (-y)%mod;
			cout<<(x1+mod)%mod;
		}
		else
		{
			long long int x1 = y%mod;
			cout<<(x1+mod)%mod;
		}
	}
    return 0;
}
