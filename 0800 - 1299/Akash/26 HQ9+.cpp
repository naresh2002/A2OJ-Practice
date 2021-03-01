//26 HQ9+
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string p;
	cin>>p;
	if(p.find('H')!=string::npos || p.find('Q')!=string::npos || p.find('9')!=string::npos)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
