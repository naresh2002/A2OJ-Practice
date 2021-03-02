//38 Little Elephant and Rozdil
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	long long int min1 = INT_MAX,j1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min1)
		{
			min1 = a[i];
			j1 = i;
		}
	}
	if(count(a,a+n,min1)>1)
	cout<<"Still Rozdil\n";
	else
	cout<<j1+1;
    return 0;
}
