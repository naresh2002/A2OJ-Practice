//14 Arrival of the General
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max1 = *max_element(a,a+n);
	int min1 = *min_element(a,a+n);
	int i,j;
	for(i=0;i<n;i++)
	{
		if(a[i]==max1)
		break;
	}
	for(j=n-1;j>=0;j--)
	{
		if(a[j]==min1)
		break;
	}
	if(j>i)
	cout<<i + (n-j-1);
	else
	cout<<i + (n-j-1) - 1;
	return 0;
}
