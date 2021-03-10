//87 Cut Ribbon
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,a,b,c;
	cin>>n>>a>>b>>c;
	long long int min1 = min(a,min(b,c));
	long long int max1 = INT_MIN;
	long long int n1 = n/min1;
	//cout<<n1<<endl;
	if(n1==n)
	{
		cout<<n;
		return 0;
	}
	for(long long int i=0;i<=n1;i++)
	{
		for(long long int j=0;j<=n1;j++)
		{
			double k = (double)(n - (i*a + j*b ))/c;
			//cout<<i<<" "<<j<<" "<<k<<endl;
			if((k - (long long int)k)==0 && k>=0)
			{
				max1 = max(max1,i+j+(long long)k);
				//cout<<max1<<endl;
			}
		}
	}
	cout<<max1;
    return 0;
}
