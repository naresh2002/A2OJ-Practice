//50 k-String
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int k;
    cin>>k;
    string s;
    cin>>s;
    map<char , int > mp;
    set<char > st;
    for(int i=0;i<s.length();i++)
    {
    	mp[s[i]]++;
    	st.insert(s[i]);
	}
	bool ans = true;
	for(auto it = st.begin();it!=st.end();it++)
	{
		//cout<<*it<<" "<<mp[*it]<<endl;
		if(mp[*it]%k!=0)
		ans = false;
	}
	if(!ans)
	cout<<-1;
	else
	{
		for(int i=0;i<k;i++)
		{
			for(auto it = st.begin();it!=st.end();it++)
			{
				for(int j=0;j<mp[*it]/k;j++)
				{
					cout<<*it;
				}
			}
		}
	}
    return 0;
}
