//83 Cards with Numbers
#include<bits/stdc++.h>
using namespace std;//---------- imp
bool cmp(pair<long long int, long long int>& a, pair<long long int, long long int>& b) 
{ 
    return a.first < b.first; 
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int n;
	cin>>n;
	map<long long int , long long int > mp;
	set<long long int > st;
	vector<pair<long long int , long long int > > v;
	for(int i=0;i<2*n;i++)
	{
		long long int a;
		cin>>a;
		mp[a]++;
		st.insert(a);
		v.push_back({a,i+1});
	}
	sort(v.begin(),v.end(),cmp);
	bool flag = true;
	for(auto it : st)
	{
		if(mp[it]%2!=0)
		{
			flag = false;
			break;
		}
	}
	if(!flag)
	cout<<-1;
	else
	{
		for(int i=0;i<2*n;i+=2)
		{
			cout<<v[i].second<<" "<<v[i+1].second<<"\n";// replace endl by "\n"
		}
	}
    return 0;
}
