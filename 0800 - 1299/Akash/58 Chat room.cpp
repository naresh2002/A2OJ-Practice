//58 Chat room
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	int h1 = -1,e1 = -1,l1 = -1, l2= -1, o1 = -1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='h')
		{
			h1 = i;
			break;
		}
	}
	for(int i=h1+1;i<s.length();i++)
	{
		if(s[i]=='e')
		{
			e1 = i;
			break;
		}
	}
	for(int i=e1+1;i<s.length();i++)
	{
		if(s[i]=='l')
		{
			l1 = i;
			break;
		}
	}
	for(int i=l1+1;i<s.length();i++)
	{
		if(s[i]=='l')
		{
			l2 = i;
			break;
		}
	}
	for(int i=l2+1;i<s.length();i++)
	{
		if(s[i]=='o')
		{
			o1 = i;
			break;
		}
	}
	//cout<<h1<<" "<<e1<<" "<<l1<<" "<<l2<<" "<<o1<<endl;
	if(h1==-1 || e1==-1 || l1==-1 || l2==-1 || o1==-1)
	cout<<"NO";
	else
	{
		if(h1<e1<l1<l2<o1)
		cout<<"YES";
		else
		cout<<"NO";
	}
    return 0;
}
