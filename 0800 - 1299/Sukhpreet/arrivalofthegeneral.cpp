#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max=INT_MIN,min=INT_MAX;
	int maxindex=0,minindex=0;
	for(int i=0;i<n;++i)
	{	
		cin>>arr[i];
		if(arr[i]<=min)
		{
			min=arr[i];
			minindex=i;
		}
	
	}
	int count=0;
	for(int i=minindex;i<n-1;++i)
	{
		swap(arr[i],arr[i+1]);
		count++;
	}
	for(int i=0;i<n;++i)
	{	
		if(max<arr[i])
		{
			max=arr[i];
			maxindex=i;
		}
	
	}
	for(int i=maxindex;i>0;--i)
	{
		swap(arr[i],arr[i-1]);
		count++;
	}
	cout<<count;


}
