//85 Cinema Line
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n],cnt25 = 0, cnt50 = 0;
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]==25)
	cnt25++;
	else if(a[0]==50 || a[0]==100)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==25)
		cnt25++;
		else if(a[i]==50)
		{
			cnt50++;
			if(cnt25>0)
			cnt25--;
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		else if(a[i]==100)
		{
			if(cnt25>0 && cnt50>0)
			{
				cnt25--;
				cnt50--;
			}
			else if(cnt25<=0 && cnt50>0)
			{
				cout<<"NO";
				return 0;
			}
			else if(cnt25>=3 && cnt50<=0)
			{
				cnt25-=3;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
    return 0;
}
