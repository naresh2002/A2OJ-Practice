//16 Levko and Table
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	long long int f = n-1,l = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<f;j++)
		{
			cout<<1<<" ";
		}
		cout<<k-(n-1)<<" ";
		for(int j=0;j<l;j++)
		{
			cout<<1<<" ";
		}
		cout<<endl;
		f--;
		l++;
	}
	return 0;
}
