#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int ar[7];
	int sum=0;
	for(int i=0;i<7;++i)
	{
		cin>>ar[i];
	}
	int j=0;
	while(sum<t)
	{
		if(j==7 && sum<t)
			j=0;
		sum+=ar[j];
		j++;
	}
	cout<<j;
}
