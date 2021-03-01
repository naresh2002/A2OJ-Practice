//33 Supercentral Point
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n;
    cin>>n;
    long long int x[n],y[n];
    for(int i=0;i<n;i++)
    {
    	cin>>x[i]>>y[i];
	}
	long long int cnt = 0;
	for(int i=0;i<n;i++)
	{
		bool flag1 = false,flag2 = false, flag3 = false, flag4 = false;
		for(int j=0;j<n;j++)
		{
			if(x[j]<x[i] && y[j]==y[i])
			flag1 = true;
			if(x[j]>x[i] && y[j]==y[i])
			flag2 = true;
			if(x[j]==x[i] && y[j]>y[i])
			flag3 = true;
			if(x[j]==x[i] && y[j]<y[i])
			flag4 = true;
		}
		if(flag1 && flag2 && flag3 && flag4)
		cnt++;
	}
	cout<<cnt;
    return 0;
}
