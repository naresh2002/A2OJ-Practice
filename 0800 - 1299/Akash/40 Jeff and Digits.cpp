//40 Jeff and Digits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<long long int > v;
	long long int sum = 0;
	for(int i=0;i<1001;i++)
	{
		if(sum%9==0)
		v.push_back(sum);
		sum +=5;
	}
	long long int n;
	cin>>n;
	long long int a[n],sum1 = 0,cnt = 0;
	bool zero = false;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum1+=a[i];
		if(a[i]==0)
		{
			cnt++;
			zero = true;
		}
	}
	if(!zero)
	cout<<-1;
	else
	{
		long long int x1;
		auto it = lower_bound(v.begin(), v.end(), sum1);
		if(sum1 == v[it-v.begin()])
		x1 = v[it-v.begin()];
		else
		x1 = v[it-v.begin()-1];
		for(int i=0;i<x1/5;i++)
		{
			cout<<5;
		}
		if(x1==0)
		cout<<0;
		else
		{
			for(int i=0;i<cnt;i++)
			{
				cout<<0;
			}
		}
	}
    return 0;
}
