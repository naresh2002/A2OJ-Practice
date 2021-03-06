#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z;
	int count=0;
	while(n--)
	{
		int a=0;
		cin>>x>>y>>z;
		if(x==1)
			a++;
		if(y==1)
			a++;
		if(z==1)
			a++;
		if(a>=2)
			count++;
				
	}
	cout<<count;
	
}
