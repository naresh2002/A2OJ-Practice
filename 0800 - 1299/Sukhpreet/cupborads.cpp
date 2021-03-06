#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a0=0,a1=0,b0=0,b1=0;
	for(int i=0;i<n;++i)
	{
		int x,y;
		cin>>x>>y;
		if(x==1)
			a1++;
		else
			a0++;
		if(y==1)
			b1++;
		else
			b0++;			
	}
	cout<<min(a1,a0)+min(b1,b0);
}
