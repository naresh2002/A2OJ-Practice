//9 Candy Bags
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int f = 1, l = n*n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			cout<<f<<" "<<l<<" ";
			f++;
			l--;
		}
		cout<<endl;
	}
	return 0;
}
