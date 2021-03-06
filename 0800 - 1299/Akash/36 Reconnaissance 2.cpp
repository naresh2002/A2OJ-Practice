//36 Reconnaissance 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min1 = abs(a[0]-a[n-1]);
	long long int i1 = 0,j1 = n-1;
	
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-a[i-1])<min1)
		{
			min1 = abs(a[i]-a[i-1]);
			i1 = i;
			j1 = i-1;
		}
	}
	cout<<i1+1<<" "<<j1+1;
    return 0;
}
