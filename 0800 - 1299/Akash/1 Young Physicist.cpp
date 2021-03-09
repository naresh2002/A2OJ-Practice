//1 Young Physicist 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	long long int sumx = 0,sumy = 0,sumz = 0;
	for(int i=0;i<n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		sumx+=x;
		sumy+=y;
		sumz+=z;
	}
	if(!sumx && !sumy && !sumz)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
