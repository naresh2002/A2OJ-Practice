//56 Dragons
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long int , long long int>& a,pair<long long int, long long int>& b) 
{ 
    return a.first < b.first; 
}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int s,n;
	cin>>s>>n;
	long long int x[n],y[n];
	vector< pair<long long int,long long int>> p;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		p.push_back({x[i],y[i]});
	}
	sort(p.begin(), p.end(), cmp); 
	bool flag = true;
//	cout<<endl;
//	for(auto it = p.begin();it!=p.end();it++)
//	{
//		cout<<it->first<<" "<<it->second<<endl;
//	}
//	cout<<endl;
	for(auto it = p.begin();it!=p.end();it++)
	{
		//cout<<it->first<<" "<<it->second<<endl;
		//cout<<s<<" "<<it->first<<endl;
		if(s>it->first)
		s+=it->second;
		else
		{
			//cout<<"else\n";
			flag = false;
			break;
		}
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
    return 0;
}
