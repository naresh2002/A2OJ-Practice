//22 Way Too Long Words
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s.length()<=10)
		cout<<s<<endl;
		else
		{
			cout<<s[0];
			cout<<s.length()-2;
			cout<<s[s.length()-1];
			cout<<endl;
		}
	}
	return 0;
}
