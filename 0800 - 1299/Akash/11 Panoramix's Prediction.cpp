//11 Panoramix's Prediction
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int arr[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	map<int ,int > mp;
	for(int i=0;i<14;i++)
	{
		mp[arr[i]] = arr[i+1];
	}
	int n,m;
	cin>>n>>m;
	if(mp[n]==m)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
