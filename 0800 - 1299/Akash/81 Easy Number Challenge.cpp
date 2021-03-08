//81 Easy Number Challenge
#include<bits/stdc++.h>
using namespace std;
long long int mod = 1073741824;
long long int dp[1000000]; // dp used 
long long int printDivisors(long long int n) 
{ 
	long long int cnt = 0;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
            cnt++;
  
            else
            cnt+=2;
        } 
    } 
    return cnt;
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int sum2 = 0;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=1;k<=c;k++)
			{
				long long int x;
				if(dp[i*j*k]==0)
				{
					x = printDivisors(i*j*k);
					dp[i*j*k] = x;
				}
				else
				x = dp[i*j*k];
				sum2 = (sum2%mod + x%mod)%mod;
			}
		}
	}
	cout<<sum2%mod;
    return 0;
}
