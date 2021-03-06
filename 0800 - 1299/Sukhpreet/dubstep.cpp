#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string a;
	for(int i=0;i<s.size();++i)
	{
		if(i<s.size()-2 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i+=2;
			if(a.size()!=0 && a.back()!=' ')
				a+=" ";
			continue;			
		
		}
		a+=s[i];
	}
	cout<<a;
}

