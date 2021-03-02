#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
    for(int j=3; j<=limit; j+=2)
    { 
        if(n%j==0)
    	    return false;
    }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num && isPrime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	
}
