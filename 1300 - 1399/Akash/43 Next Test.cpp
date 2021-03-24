//43 Next Test
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	map<long long int , long long int > mp;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		mp[a]++;
	}
	for(int i=1;i<=3001;i++)
	{
		if(mp[i]==0)
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}
