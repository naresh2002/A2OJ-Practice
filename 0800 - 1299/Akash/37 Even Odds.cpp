//37 Even Odds
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	long long int x = ceil((double)n/2);
	if(k<=x)
	cout<<2*k-1;
	else
	{
		k -= x;
		cout<<2*k;
	}
    return 0;
}
