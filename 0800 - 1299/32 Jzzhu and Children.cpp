//32 Jzzhu and Children
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n,m;
    cin>>n>>m;
    vector< pair< long long int , long long int > > v;
    for(int i=0;i<n;i++)
    {
    	long long int a;
    	cin>>a;
    	v.push_back({a,i});
	}
	long long int i=0;
	while(v.size()>1)
	{
		if(v[0].first<=m)
		{
			v.erase(v.begin());
		}
		else
		{
			v.push_back({v[0].first-m,v[0].second});
			v.erase(v.begin());
		}
	}
	cout<<v[0].second + 1;
    return 0;
}
