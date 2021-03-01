#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main()
{
	long long int arr[4];
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	for(int i=0;i<4;++i)
	{	
		mp[arr[i]]++;
	}
	int count=0;
	for(auto x:mp)
	{
		if(x.second==1)
			continue;
		else 
			count+=x.second-1;	
	}
	cout<<count;
}
