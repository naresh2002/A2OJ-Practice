#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>>ar;
	for(int i=0;i<n;++i)
	{
		int x,y;
		cin>>x>>y;
		ar.push_back(make_pair(x,y));
	}
	sort(ar.begin(),ar.end());
	for(int i=0;i<n;++i)
	{
		 if(ar[i].first<s)
		 	s+=ar[i].second;
		 else
		 {
		 	cout<<"NO";
		 	return 0;
		 }	
	}
	cout<<"YES";
}
