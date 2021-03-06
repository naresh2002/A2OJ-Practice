#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[100];
	cin>>arr;
	int c1=0,c2=0,c3=0;
	for(int i=0;i<strlen(arr);++i)
	{
		if(i%2==0)
		{
			if(arr[i]=='1')
			c1++;
			if(arr[i]=='2')
			c2++;
			if(arr[i]=='3')
			c3++;
		}
	}
	vector<int>x;
	while(c1)
	{
		x.push_back(int('1'-'0'));
		c1--;
	
	}
	while(c2)
	{
		x.push_back(int('2'-'0'));
		c2--;
		
	}
	while(c3)
	{
		x.push_back(int('3'-'0'));
		c3--;
		
	}
	for(int i=0;i<x.size()-1;++i)
	    cout<<x[i]<<"+";
	 cout<<x[x.size()-1];   
	
}
