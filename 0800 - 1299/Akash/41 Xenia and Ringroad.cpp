//41 Xenia and Ringroad
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	long long int n,m;
	cin>>n>>m;
	long long int a[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	long long int pos = 1,cnt = 0;
	cnt+=a[0]-1;
	pos = a[0];
	//cout<<pos<<" "<<cnt<<endl;
	for(int i=1;i<m;i++)
	{
		if(a[i]<pos)
		{
			cnt += (n-pos);
			cnt += a[i];
			pos = a[i];
		}
		else if(a[i]>pos)
		{
			cnt += (a[i]-pos);
			pos = a[i];
		}
		//cout<<pos<<" "<<cnt<<endl;
	}
	cout<<cnt;
    return 0;
}
