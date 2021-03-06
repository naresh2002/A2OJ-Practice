#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_map<int,vector<int>>arr;
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;
		arr[x].push_back(i);
	}
	vector<vector<int>>a;
	for(auto i:arr)
	{
		if(i.second.size()==1)
			a.push_back({i.first,0});
		else if(i.second.size()==2)
			a.push_back({i.first,i.second[1]-i.second[0]});
		else
		{
			int diff=i.second[1]-i.second[0];
			int count=0;
			for(int j=1;j<i.second.size();++j)
			{
			    if(i.second[j]-i.second[j-1]==diff)
			    	count=0;
			    else
			    {
			    	count=1;
			    	break;
			    }	
			}
			if(count==0)
			    a.push_back({i.first,diff});
		}	
	}
	cout<<a.size()<<endl;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();++i)
	{
		cout<<a[i][0]<<" "<<a[i][1]<<endl;
	}	
}
