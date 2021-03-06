#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();++i)
	{
		if(i<(s.size()-2) && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
			i+=2;
		else if(i<(s.size()-1) && s[i]=='1' && s[i+1]=='4' )
			i+=1;
		else if(s[i]=='1')
			continue;
		else
			{
				cout<<"NO";
				return 0;
			}	
			
	}	
	cout<<"YES";
}
