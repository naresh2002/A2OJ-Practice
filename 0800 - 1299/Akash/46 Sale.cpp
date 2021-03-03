//46 Sale
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int sum1 = 0;
	for(int i=0;i<m;i++)
	{
		if(a[i]<0)
		sum1+=abs(a[i]);
	}
	cout<<sum1;
    return 0;
}
