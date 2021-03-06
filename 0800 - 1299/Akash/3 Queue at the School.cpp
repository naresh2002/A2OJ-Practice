//3 Queue at the School
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<s.length()-1;j++)
		{
			if(s[j]=='B' && s[j+1]=='G')
			{
				swap(s[j],s[j+1]);
				j++;
			}
		}
		//cout<<s<<endl;
	}
	cout<<s<<endl;
	return 0;
}
