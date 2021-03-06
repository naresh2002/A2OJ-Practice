#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];	
	}
	int max=arr[0];
	int min=arr[0];
	int count=0;
	for(int i=1;i<n;++i)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			count++;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			count++;
		}
	}
	cout<<count;
}

