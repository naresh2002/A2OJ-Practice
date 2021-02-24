//4 Borze
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	string s0 = ".",s1 = "-.",s2 = "--";
	bool pre2 = true;
	while(pre2)
	{
		size_t idx = s.find(s2);
		if(idx==string::npos)
		pre2 = false;
		else
		{
			s.replace(idx, 2, "2");
		}
		idx += 1;
	}
	bool pre1 = true;
	while(pre1)
	{
		size_t idx1 = s.find(s1);
		if(idx1==string::npos)
		pre1 = false;
		else
		{
			s.replace(idx1, 2, "1");
		}
		idx1 += 1;
	}
	bool pre0 = true;
	while(pre0)
	{
		size_t idx2 = s.find(s0);
		if(idx2==string::npos)
		pre0 = false;
		else
		{
			s.replace(idx2, 1, "0");
		}
	}
	cout<<s<<endl;
	return 0;
}
