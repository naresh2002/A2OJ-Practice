//70 Comparing Strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s1,s2;
	cin>>s1>>s2;
	vector<int > v;
	if(s1.length()!=s2.length())
	cout<<"NO";
	else
	{
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i])
			v.push_back(i);
		}
		if(v.size()==2)
		swap(s1[v[0]],s1[v[1]]);
		if(s1==s2)
		cout<<"YES";
		else
		cout<<"NO";
	}
    return 0;
}
