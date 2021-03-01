//34 Petr and Book
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n;
    cin>>n;
    long long int a[7],sum = 0;
    for(int i=0;i<7;i++)
    {
    	cin>>a[i];
    	sum += a[i];
	}
	if(sum == 1)
	{
		for(int i=0;i<7;i++)
		{
			if(a[i]==1)
			cout<<i+1;
		}
	}
	else if(n<=sum)
	{
		int i = 0;
		for(i=0;i<7;i++)
		{
			n -= a[i];
			if(n<=0)
			break;
		}
		cout<<i+1;
	}
	else
	{
		n = n % sum;
		if(n==0)
		{
			int i=6;
			for(i=6;i>=0;i--)
			{
				if(a[i]>0)
				break;
			}
			cout<<i+1;
		}
		else
		{
			int i = 0;
			for(i=0;i<7;i++)
			{
				n -= a[i];
				if(n<=0)
				break;
			}
			cout<<i+1;
		}
	}
    return 0;
}
