//91 T-primes
#include<bits/stdc++.h>// T - primes are the square of prime numbers
using namespace std;
bool isPrime(long long int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		double x1 = sqrt(x[i]);
		if((x1 - (long long int )x1) == 0 && isPrime(x1))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
    return 0;
}
