//15 Drinks
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int p[n];
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		sum+=p[i];
	}
	double sum1 = (double)sum/n;
	printf("%.12f",sum1);
	return 0;
}
