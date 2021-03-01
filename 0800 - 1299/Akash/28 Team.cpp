//28 Team
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 && c==1) || (a==0 && b==1 && c==1))
		cnt++;
	}
	cout<<cnt;
	return 0;
}
