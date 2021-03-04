//62 Jeff and Periods
#include<bits/stdc++.h>
using namespace std;
vector<long long int > v[100001];
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	set<long long int > st;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		v[a].push_back(i);
		st.insert(a);
	}
	map<long long int , long long int > mp;
	for(auto it : st)
	{
		//cout<<it<<" ";
		bool flag = true;
		long long int diff;
		if(v[it].size()==1)
		diff = 0;
		else if(v[it].size()==2)
		diff = v[it][1]-v[it][0];
		else if(v[it].size()>=3)
		{
			diff = v[it][1]-v[it][0];
			for(int i=2;i<v[it].size();i++)
			{
				//cout<<v[it][i]<<" ";
				if((v[it][i]-v[it][i-1])!=diff)
				{
					flag = false;
					break;
				}
			}
		}
		if(flag)
		mp[it] = diff;
	}	
	cout<<mp.size()<<endl;
	for(auto it : st)
	{
		if(mp.find(it)!=mp.end())
		cout<<it<<" "<<mp[it]<<endl;
	}
    return 0;
}
