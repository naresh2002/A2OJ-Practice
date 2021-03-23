//12 Lunch Rush
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	long long int max1 = INT_MIN;
	for(int i=0;i<n;i++)
	{
		long long int fi,ti;
		cin>>fi>>ti;
		if(ti>k)
		max1 = max(max1, fi - (ti - k));
		else
		max1 = max(max1, fi);
	}
	cout<<max1;
	return 0;
}
