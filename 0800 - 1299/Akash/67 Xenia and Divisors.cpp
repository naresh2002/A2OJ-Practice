//67 Xenia and Divisors
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// possible pairs = (1,2,4), (1,2,6), (1,3,6)
	long long int n;
	cin>>n;
	set<long long int > st;
	map<long long int , long long int > mp;
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		if(a==5 || a==7)
		{
			flag = false;
		}
		mp[a]++;
	}
	if(mp[1]>0 && mp[2]==0 && mp[3]>0 && mp[4]>0 && mp[6]==0)
	{
		cout<<-1;
		return 0;
	}
	long long int x = n/3;
	if(!flag || mp[1]!=x || (mp[2]+mp[3])!=x || (mp[4]+mp[6])!=x)
	{
		cout<<-1;
		return 0;
	}
	long long int x1 = mp[4], z1 = mp[3], y1 = mp[6]-z1;
	//cout<<x1<<" "<<y1<<" "<<z1<<endl;
	if(x1<0 || y1<0 || z1<0)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<x1;i++)
	cout<<"1 2 4\n";
	for(int i=0;i<y1;i++)
	cout<<"1 2 6\n";
	for(int i=0;i<z1;i++)
	cout<<"1 3 6\n";
    return 0;
}
