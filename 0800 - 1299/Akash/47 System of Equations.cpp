//47 System of Equations
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int cnt = 0;
	for(int a=0;a<=1000;a++) // a<=m
	{
		for(int b=0;b<=1000;b++)// b<=n
		{
			if((a*a + b)==n && (a + b*b)==m)
			cnt++;
		}
	}
	cout<<cnt;
    return 0;
}
