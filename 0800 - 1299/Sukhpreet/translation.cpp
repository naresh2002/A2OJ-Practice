#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	for(int i=0;i<a.size();++i)
	{
		if(a[i]==b[a.size()-i-1])
			continue;
		else
		{
			cout<<"NO";
			return 0;
		}	
	}
	cout<<"YES";
}
