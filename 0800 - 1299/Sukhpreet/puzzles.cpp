#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;++i)
		cin>>arr[i];
	sort(arr,arr+m);
	int minimum=INT_MAX;
	for(int i=n;i<=m;++i)
		minimum=min(minimum,abs(arr[i-1]-arr[i-n]));
	cout<<minimum;	
}
