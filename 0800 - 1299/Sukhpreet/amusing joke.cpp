#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a,b;
	cin>>s;
	cin>>a;
	cin>>b;
	int aa[26]={0};
	int ba[26]={0};	
	for(int i=0;i<s.size();++i)
	{
		aa[s[i]-'A']++;
	}
	for(int i=0;i<a.size();++i)
	{
		aa[a[i]-'A']++;
	}
	for(int i=0;i<b.size();++i)
	{
		ba[b[i]-'A']++;
	}

	int count=0;
	for(int i=0;i<26;++i)
	{
		if(aa[i]!=ba[i])
			count=1;
	}
	if(count==1)
	cout<<"NO";
	else
	cout<<"YES";
	
}
