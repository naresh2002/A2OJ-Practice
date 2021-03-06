#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c0=0,c1=0;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]=='0')
		{
			c0++;
			c1=0;			
		}	
		if(s[i]=='1')
		{
			c1++;
			c0=0;
		}
		if(c0>=7)
		{
			cout<<"YES";
			return 0;
		}
		if(c1>=7)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
