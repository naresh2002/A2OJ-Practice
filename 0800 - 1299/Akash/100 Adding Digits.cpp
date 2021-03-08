//100 Adding Digits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int a,b,n;
	cin>>a>>b>>n;
	bool flag = false;
	for(int i=0;i<=9;i++)
	{
		if((a*10+i)%b==0)
		{
			flag = true;
			cout<<a<<i;
			for(int j=0;j<n-1;j++)
			{
				cout<<0;
			}
			break;
		}
	}
	if(!flag)
	cout<<-1;
    return 0;
}
