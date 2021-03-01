//23 Boy or Girl
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	set<char > st;
	st.insert(s.begin(),s.end()); //-------------- imp
//	for(auto it = st.begin();it!=st.end();it++)
//	{
//		cout<<*it<<endl;
//	}
	if(st.size()&1)
	cout<<"IGNORE HIM!";
	else
	cout<<"CHAT WITH HER!";
	return 0;
}
