//26 Fancy Fence
#include<bits/stdc++.h>
using namespace std;//https://www.geeksforgeeks.org/check-if-it-is-possible-to-create-a-polygon-with-a-given-angle/
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a;
		cin>>a;
		double n = (double)360/(180 - a);
		if(n == (long long int)n)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
