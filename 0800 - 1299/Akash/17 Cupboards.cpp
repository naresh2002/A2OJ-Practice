//17 Cupboards
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int l[n],r[n];
	int l0=0,l1=0,r0=0,r1=0;
	for(int i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		if(l[i]==0)
		l0++;
		if(l[i]==1)
		l1++;
		if(r[i]==0)
		r0++;
		if(r[i]==1)
		r1++;
	}
	int cnt = min(l0,l1) + min(r0,r1);
	cout<<cnt;
	return 0;
}
