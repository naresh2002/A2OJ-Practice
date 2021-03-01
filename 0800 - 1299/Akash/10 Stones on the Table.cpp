//10 Stones on the Table
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt = 0;
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		cnt++;
	}
	cout<<cnt;
	return 0;
}
