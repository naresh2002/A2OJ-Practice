//13 Perfect Permutation
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a[101];
	for(int i=1;i<=100;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<=100;i+=2)
	{
		swap(a[i],a[i+1]);
	}
	int n;
	cin>>n;
	if(n&1)
	cout<<-1;
	else
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
