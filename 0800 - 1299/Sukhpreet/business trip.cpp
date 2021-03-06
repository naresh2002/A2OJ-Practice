#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[12];
	for(int i=0;i<12;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+12);
	int x=0;
	int count=0;
	for(int i=11;i>=0;--i)
	{
		if(x<n)
		{
			x+=arr[i];
			count++;
		}	
	}
	if(x<n)
		cout<<-1;
	else
		cout<<count;
	
}
