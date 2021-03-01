#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	long long int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	long long int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if((sum-a[i])%2==0)
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
