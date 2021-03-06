#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_map<string,int>a;
	while(n--)
	{
		string x;
		cin>>x;
		a[x]++;
	}
	int max=INT_MIN;
	string index;
	for(auto i:a)
	{
		if(max<i.second)
		{
			max=i.second;
			index=i.first;
		}	
	}
	cout<<index;
	
}
