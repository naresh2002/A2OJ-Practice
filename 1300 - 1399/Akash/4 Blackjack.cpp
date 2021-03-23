//4 Blackjack
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<long long int , long long int > mp;
	long long int n;
	cin>>n;
	n-=10;
	if(n<=0 || n>11)
	{
		cout<<0;
		return 0;
	}
	if(n==10)
	{
		cout<<15;
		return 0;
	}
	cout<<4;
	return 0;
}
