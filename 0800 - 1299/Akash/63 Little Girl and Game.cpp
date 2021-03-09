//63 Little Girl and Game
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	map<char, long long int > mp;
	set< char > st;
	for(int i=0;i<s.length();i++)
	{
		mp[s[i]]++;
		st.insert(s[i]);
	}
	long long int odd_char_count = 0;
	for(auto it : st)
	{
		if(mp[it]&1)
		odd_char_count++;
	}
	if(odd_char_count==0 || odd_char_count&1)
	cout<<"First";
	else
	cout<<"Second";
    return 0;
}
