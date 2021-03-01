//16 Insomnia Cure
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	if(k==1 || l==1 || m==1 || n==1)
	{
		cout<<d;
	}
	else
	{
		long long int a[d+1] = {0};
		for(int i=1;i<d+1;i++)
		{
			if(i%k==0 || i%l==0 || i%m==0|| i%n==0)
			a[i]=1;
		}
		long long int ans = d - count(a+1,a+d+1,0);
		cout<<ans;
	}
	return 0;
}
