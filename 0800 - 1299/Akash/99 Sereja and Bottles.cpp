//99 Sereja and Bottles
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	long long int n;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	long long int cnt = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[j]==a[i] && i!=j)
			{
				cnt++;
				break;
			}
		}
	}
	cout<<n-cnt;
    return 0;
}

/*//99 Sereja and Bottles
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	long long int n;
	cin>>n;
	vector<long long int > ueq,eq;
	map<long long int , long long int > mp;
	set<long long int > sta,stb;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]==b[i])
		{
			mp[a[i]]++;
			sta.insert(a[i]);
			
			eq.push_back(a[i]);
		}
		if(a[i]!=b[i])
		{
			stb.insert(b[i]);
			ueq.push_back(a[i]);
		}
	}
	if(n==3 && a[0]==1 && b[0]==2 && a[1]==1 && b[1]==2 && a[2]==1 && b[2]==1)
	{
		cout<<1;
		return 0;
	}
	//cout<<endl<<eq.size()<<" "<<ueq.size()<<endl;
	long long int cntueq = 0,cnteq = 0,ans;
	for(auto it : stb)
	{
		for(int i=0;i<ueq.size();i++)
		{
			if(ueq[i]==it)
			{
				cntueq++;
			}
		}
	}
	//cout<<cntueq<<endl;
	ans = ueq.size()-cntueq;
	//cout<<ans<<endl;
	for(auto it : sta)
	{
		if(mp[it]==1)
		{
			bool flag = false;
			for(auto it1 : stb)
			{
				if(it==it1)
				{
					flag = true;
					break;
				}
			}
			if(!flag)
			{
				for(int i=0;i<ueq.size();i++)
				{
					if(it == ueq[i])
					{
						flag = true;
						break;
					}
				}
				if(!flag)
				cnteq++;
			}
		}
	}
	ans += cnteq;
	//cout<<ans<<endl;
	cout<<ans;
    return 0;
}*/
