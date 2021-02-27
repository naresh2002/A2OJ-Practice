//29 Bit++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int x = 0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s.find("++")!=string::npos)
		x++;
		else
		x--;
	}
	cout<<x;
	return 0;
}
