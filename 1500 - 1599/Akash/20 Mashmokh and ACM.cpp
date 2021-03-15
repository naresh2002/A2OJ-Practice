//20 Mashmokh and ACM
#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
long long int dp[2001][2001];

// precomputing the ans for each k values 
void pre_compute()
{
    for(int i=1;i<2001;i++)   
	{
		dp[1][i]=1;
	}
    for(int i=1;i<2001;i++)
    {
        for(int j=1;j<2001;j++)
        {
            for(int k=j;k<2001;k+=j)// run for time numbers  of j
            {
            	//cout<<i<<" "<<k<<" "<<i-1<<" "<<j<<endl;
                dp[i][k]=(dp[i][k]+dp[i-1][j])%mod;
            }
        }
    }
}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	pre_compute();
	long long int n,k;
    cin>>n>>k;
//    for(int i=1;i<=10;i++)
//    {
//    	for(int j=1;j<=10;j++)
//    	{
//    		cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
    long long int num_of_good_seq = 0;
    for(int i=1;i<=n;i++)
    {
        num_of_good_seq = (num_of_good_seq%mod + dp[k][i]%mod)%mod;
    }
    cout<<num_of_good_seq<<endl;
    return 0;
}
