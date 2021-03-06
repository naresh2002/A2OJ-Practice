#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=INT_MIN;
	int a=0;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		a=a-x+y;
		if(max<a)
			max=a;
	}
	cout<<max;
}
