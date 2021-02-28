//31 Dima and Friends
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum1 = 0;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	sum1+=a[i];
	}
	long long int cnt = 0;
	for(int i=1;i<=5;i++)
	{
		if(((sum1+i)%(n+1))!=1)
		cnt++;
	}
	cout<<cnt;
    return 0;
}
