//82 Pythagorean Theorem II
#include<bits/stdc++.h>
using namespace std;//---------- imp
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int cnt = 0;
	for (long long int i = 1; i < n; i++) 
	{
		for (long long int j = i; (i*i) + (j*j) <= (n*n); j++) 
		{
			double tmp = i*i + j*j;

			if (int(sqrt(tmp)) * int(sqrt(tmp)) == tmp)
			{
				cnt++;
				//cout<<i<<" "<<j<<" "<<sqrt(tmp)<<endl;
			}
		}
	}
	cout<<cnt;
    return 0;
}
