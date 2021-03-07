//76 TL
//runnning with "extra time" means time limit ke pehle hi solve ho jaye
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n,m;
	cin>>n>>m;
	long long int a[n],b[m];
	long long int min_crt = INT_MAX,max_crt = INT_MIN,min_wrg = INT_MAX,v = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		min_crt = min(min_crt,a[i]);
		max_crt = max(max_crt,a[i]);
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		min_wrg = min(min_wrg,b[i]);
	}
	//cout<<min_crt<<" "<<max_crt<<" "<<min_wrg<<endl;
	set<long long int > st;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=(2*min_crt))
		st.insert(a[i]);
	}
	//cout<<st.size()<<endl;
	if(n==1)
	{
		if((2*a[0])<min_wrg)
		cout<<2*a[0];
		else
		cout<<-1;
	}
	else if(st.size()==0)
	{
		if((2*min_crt)<min_wrg)
		cout<<2*min_crt;
		else
		cout<<-1;
	}
	else if(st.size()==1)
	{
		if(*st.begin()<min_wrg)
		cout<<*st.begin();
		else
		cout<<-1;
	}
	else
	{
		for(auto it = st.begin();it!=st.end();it++)
		{
			//cout<<"*it "<<*it<<endl;
			if(*it<min_wrg && *it>=max_crt)
			{
				v = min(v,*it);
			}
		}
		if(v==INT_MAX)
		cout<<-1;
		else
		cout<<v;
	}
    return 0;
}
