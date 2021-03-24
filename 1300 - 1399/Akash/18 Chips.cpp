//18 Chips
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int sum1 = n*(n+1)/2;
	long long int x1 = m%sum1;
	if(x1==0)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		if((x1-i)>=0)
		x1-=i;
		else 
		break;
	}
	cout<<x1;
	return 0;
}
