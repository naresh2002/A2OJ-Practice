#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int count=0;
	if(k<=(n+1)/2)
	 	cout<<2*k-1;
	else
		cout<<2*abs(k-(n+1)/2); 	
	
	
	
}
