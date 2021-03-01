#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0,y=0,z=0;
	while(n--)
	{
		int x1,y1,z1;
		cin>>x1>>y1>>z1;
		x+=x1;
		y+=y1;
		z+=z1;
	}	
	if(x || y || z)
	cout<<"NO";
	else
	cout<<"YES";
}
