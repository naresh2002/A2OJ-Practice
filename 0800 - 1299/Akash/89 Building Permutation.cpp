//89 Building Permutation
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
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int sum1 = 0;
	for(int i=0;i<n;i++)
	{
		sum1 += abs((i+1)-a[i]);
	}
	cout<<sum1;
    return 0;
}
