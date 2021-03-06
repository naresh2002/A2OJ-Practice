#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar1[n];
	for(int i=0;i<n;++i)
		cin>>ar1[i];
	int m;
	cin>>m;
	int ar2[m];
	for(int i=0;i<m;++i)
		cin>>ar2[i];
	int max=INT_MIN;
	unordered_map<int,int>a;
	for(int i=0;i<n;++i)
	{
		for(int j=m-1;j>=0;--j)
		{
			if(ar2[j]%ar1[i]==0)
			{
				if(max<ar2[j]/ar1[i])
					max=ar2[j]/ar1[i];
				a[ar2[j]/ar1[i]]++;	
			}
		}
	}
	for(auto i:a)
	{
	    if(i.first==max)
	       { 
	        cout<<i.second;
	        break;
	       } 
	}
	
}
