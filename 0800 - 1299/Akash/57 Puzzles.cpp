//57 Puzzles
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int f[m];
	for(int i=0;i<m;i++)
	{
		cin>>f[i];
	}
	sort(f,f+m);
	n--;
	long long int min1 = INT_MAX;
	for(int i=0;i<m-n;i++)
	{
		//cout<<f[i]<<" "<<f[i+n]<<endl;
		min1 = min(min1,abs(f[i+n]-f[i]));
	}
	cout<<min1;
    return 0;
}
