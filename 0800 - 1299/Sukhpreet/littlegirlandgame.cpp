#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c[26]={0};
	for(int i=0;i<s.length();++i)
		c[s[i]-'a']++;
	int odd=0;
	for(int i=0;i<26;++i)
	{
		if(c[i]%2==1)
			odd++;	
	}	
	if(odd%2 || odd==0)
		cout<<"First";
	else
		cout<<"Second";
}
