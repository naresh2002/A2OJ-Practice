//53 String Task
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
		{
			s.replace(i,1,"");
			i--;
			//string pre = s.substr(0,i);
			//string post = s.substr(i+1,s.length()-i-1);
		}
	}
	for(int i=0;i<s.length();i++)
	{
		cout<<"."<<s[i];
	}
    return 0;
}
