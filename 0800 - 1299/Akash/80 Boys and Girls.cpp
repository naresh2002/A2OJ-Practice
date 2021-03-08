//80 Boys and Girls
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n<=m)
	{
		for(int i=0;i<n;i++)
		cout<<"GB";
		for(int i=0;i<m-n;i++)
		cout<<"G";
	}
	else
	{
		for(int i=0;i<m;i++)
		cout<<"BG";
		for(int i=0;i<n-m;i++)
		cout<<"B";
	}
    return 0;
}
