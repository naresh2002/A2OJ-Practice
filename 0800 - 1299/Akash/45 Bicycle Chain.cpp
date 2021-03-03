//45 Bicycle Chain
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
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int m;
	cin>>m;
	long long int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	long long int max1 = INT_MIN;
	map<long long int , long long int > mp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[j]%a[i]==0)
			{
				mp[b[j]/a[i]]++;
				//cout<<b[j]<<" "<<a[i]<<" "<<b[j]/a[i]<<" "<<mp[b[j]/a[i]]<<endl;
				max1 = max(max1,b[j]/a[i]);
			}
		}
	}
	cout<<mp[max1];
    return 0;
}
