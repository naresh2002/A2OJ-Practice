//66 Shooshuns and Sequence
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,k;
	cin>>n>>k;
	k--;
	set<long long int > st;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		st.insert(a[i]);
	}
	if(st.size()==1)
	cout<<0;
	else
	{
		bool flag = true;
		for(int i=k+1;i<n;i++)
		{
			if(a[i]!=a[i-1])
			{
				flag = false;
				break;
			}
		}
		if(!flag)
		cout<<-1;
		else// possible only when from k or some points before k, all elements are same upto n
		{
			long long int pre = 0;
			for(int i=k-1;i>=0;i--)
			{
				if(a[i]==a[i+1])
				pre++;
				else
				break;
			}
			cout<<k-pre;
		}
	}
    return 0;
}
