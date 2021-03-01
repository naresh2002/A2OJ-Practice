//30 Effective Approach
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
	map<long long int ,long long int > mp1,mp2;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp1[a[i]]= i+1;
		mp2[a[i]] = n-i;
	}
	long long int m;
	cin>>m;
	long long int vasya = 0,petya = 0;
	while(m--)
	{
		long long int bi;
		cin>>bi;
		vasya += mp1[bi];
		petya += mp2[bi];
	}
	cout<<vasya<<" "<<petya;
	return 0;
}
