//93 Flipping Game
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n],max1 = INT_MIN,cnt1 = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		cnt1++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			long long int cnt0 = 0,cnt11 = cnt1;
			//cout<<"n "<<i<<" "<<j<<endl;
			for(int k=i;k<=j;k++)
			{
				if(a[k]==0)
				cnt0++;
				if(a[k]==1)
				cnt11--;
			}
			//cout<<cnt0<<" "<<cnt11<<endl;
			max1 = max(max1,cnt11 + cnt0);
			//cout<<max1<<endl;
		}
	}
	cout<<max1;
    return 0;
}
