//30 Wizards and Demonstration
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,x,y;
	cin>>n>>x>>y;
	long long int x1 = ceil(((float)y/100)*n);
	//cout<<x1<<endl;
	if(x1<=x)
	cout<<0;
	else
	cout<<x1-x;
	return 0;
}
