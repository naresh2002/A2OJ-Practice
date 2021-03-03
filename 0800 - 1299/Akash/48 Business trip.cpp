//48 Business trip
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int k;
	cin>>k;
	long long int a[12],sum1 = 0;
	for(int i=0;i<12;i++)
	{
		cin>>a[i];
		sum1+=a[i];
	}
	if(k==0)
	cout<<0;
	else if(sum1<k)
	cout<<-1;
	else
	{
		long long int sum2 = 0,cnt=0;
		sort(a,a+12);
		for(int i=11;i>=0;i--)
		{
			sum2+=a[i];
			cnt++;
			if(sum2>=k)
			break;
		}
		cout<<cnt;
	}
    return 0;
}
