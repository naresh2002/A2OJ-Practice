//51 The number of positions
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,a,b;
	cin>>n>>a>>b;
	if(n-a>b)// we will always place petr to last position
	cout<<b+1;
	else
	cout<<n-a;
    return 0;
}
