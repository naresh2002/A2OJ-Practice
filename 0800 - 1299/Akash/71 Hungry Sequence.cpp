//71 Hungry Sequence
#include<bits/stdc++.h>
using namespace std;
long long int x = 10000000;
void SieveOfEratosthenes(long long int n)
{
	bool prime[x + 1];
	long long int cnt  = 0;
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= x; p++)
	{
		if (prime[p] == true) 
		{
			for (int i = p * p; i <= x; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= x; p++)
		if (prime[p])
		{
			cout << p << " ";
			cnt++;
			if(cnt == n)
			return ;
		}
}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;// just print first n prime numbers
	cin>>n;
	SieveOfEratosthenes(n);
    return 0;
}
