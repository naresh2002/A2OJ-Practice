//84 Domino
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int x[n],y[n],xeven_yodd = 0,xodd_yeven = 0,xy_odd = 0; 
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		if(x[i]%2==0 && y[i]%2!=0)
		xeven_yodd++;
		if(x[i]%2!=0 && y[i]%2==0)
		xodd_yeven++;
		if(x[i]%2!=0 && y[i]%2!=0)
		xy_odd++;
	}
	if(n==1)
	{
		if(x[0]%2==0 && y[0]%2==0)
		cout<<0;
		else
		cout<<-1;
	}
	else
	{
		if(xy_odd%2==0)
		{
			if(xodd_yeven%2!=0 && xeven_yodd%2!=0)
			cout<<1;
//			else if(xodd_yeven==0 && xeven_yodd==0)
//			cout<<0;
			else if(xodd_yeven%2==0 && xeven_yodd%2==0)
			cout<<0;
			else
			cout<<-1;
		}
		else
		{
			if(xodd_yeven%2!=0 && xeven_yodd%2!=0)
			cout<<0;
			else if(xodd_yeven==0 && xeven_yodd==0)
			cout<<-1;
			else if(xodd_yeven%2==0 && xeven_yodd%2==0)
			cout<<1;
			else
			cout<<-1;
		}
	}
    return 0;
}
