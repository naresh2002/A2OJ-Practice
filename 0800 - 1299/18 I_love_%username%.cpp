//18 I_love_\%username\%
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int a[n];
	int max1,min1,cnt = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			max1 = min1 = a[i];
			//min1 = a[i];
		}
		if(i>0)
		{
			if(a[i]>max1)
			{
				max1 = a[i];
				cnt++;
			}
			else if(a[i]<min1)
			{
				min1 = a[i];
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
