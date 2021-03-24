//44 Laptops
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long int , long long int > &a,pair<long long int , long long int > &b)
{
	return a.first<b.first;
}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	vector<pair<long long int , long long int> > v;
	for(int i=0;i<n;i++)
	{
		long long int ai,bi;
		cin>>ai>>bi;
		v.push_back({ai,bi});
	}
	sort(v.begin(), v.end(),cmp);
	for(int i=0;i<n-1;i++)
	{
		//cout<<v[i].first<<" "<<v[i].second<<endl;
		if(v[i].first<v[i+1].first && v[i].second>v[i+1].second)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
	return 0;
}
