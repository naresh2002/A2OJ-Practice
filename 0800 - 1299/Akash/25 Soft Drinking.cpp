//25 Soft Drinking
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	l *=k;
	d *=c;
	int x1 = l/nl;
	int x2 = p/np;
	cout<<min(min(x1,x2),d)/n;
	return 0;
}
