#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	int sum=0;
	queue<int>candy,children;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}	
	for(int i=0;i<n;++i)
	{
		candy.push(arr[i]);
		children.push(i);
	}
	int count=0;
	while(!candy.empty())
	{
		if(candy.front()<=m)
		{
			candy.pop();
			children.pop();
		}
		else
		{
			candy.push(candy.front()-m);
			children.push(children.front());
			candy.pop();
			children.pop();
		}
		count=children.back();
	}
	cout<<count+1;
}
