//19 Tram
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int tram = 0,max1 = INT_MIN;
	for(int i=0;i<n;i++)
	{
		int ai,bi;
		cin>>ai>>bi;
		tram += (bi-ai);
		max1 = max(tram,max1);
	}
	cout<<max1;
	return 0;
}
