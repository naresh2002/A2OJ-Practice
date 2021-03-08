//77 Increase and Decrease -------- imp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n],x1 = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		x1 = (x1 + a[i])%n;
		//cout<<"x1 = "<<x1<<endl;
	}
	if(x1==0)
	cout<<n;
	else
	cout<<n-1;
    return 0;
}
