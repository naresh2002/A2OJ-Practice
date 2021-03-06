//59 Airport
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int a[m],sum1 = 0,sum2 = 0;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		sum1 +=a[i];
		sum2 += (a[i]*(a[i]+1)/2);
	}
	if(n>=sum1)
	cout<<sum2<<" "<<sum2;
	else
	{
		//min
		sort(a,a+m);
		vector<long long int > v1;
		long long int min1=0,max1=0;
		for(int i=0;i<m;i++)
		{
			for(int j=a[i];j>=1;j--)
			{
				v1.push_back(j);
				if(v1.size()<=n)
				min1+=j;
			}
		}
		//max
		sort(v1.begin(),v1.end());
		reverse(v1.begin(),v1.end());
		for(int i=0;i<n;i++)
		{
			max1+=v1[i];
		}
		cout<<max1<<" "<<min1;
	}
    return 0;
}
