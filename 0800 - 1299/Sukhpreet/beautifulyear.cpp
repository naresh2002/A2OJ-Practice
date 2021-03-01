#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z,u;
	int i;
	for(i=n+1;i<=9015;++i)
	{
		int m=i;
		x=m%10;
		m/=10;
		y=m%10;
		m/=10;
		z=m%10;
		m/=10;
		u=m%10;
		if(x!=y && x!=z && x!=u && y!=z && y!=u && z!=u)
		 break;
	}
	cout<<i;
}
