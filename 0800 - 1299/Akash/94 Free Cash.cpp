//94 Free Cash
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	map<pair<long long int , long long int >, long long int > mp;
	long long int max1 = INT_MIN;
	for(int i=0;i<n;i++)
	{
		long long int h,m;
		cin>>h>>m;
		mp[{h,m}]++;
		max1 = max(max1,mp[{h,m}]);
	}
	cout<<max1;
    return 0;
}
