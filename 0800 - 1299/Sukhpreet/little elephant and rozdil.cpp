#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int min=INT_MAX;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		if(min>arr[i])
			min=arr[i];
	}	
	int count=0;
	int index=0;
	for(int i=0;i<n;++i)
	{
		if(min==arr[i])
		{
			count++;
			index=i;
		}	
	}
	if(count>1)
		cout<<"Still Rozdil";
	else
		cout<<index+1;	
}
