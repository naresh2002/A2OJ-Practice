//20 Helpful Maths
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	int cnt1 = count(s.begin(),s.end(),'1');
	int cnt2 = count(s.begin(),s.end(),'2');
	int cnt3 = count(s.begin(),s.end(),'3');
	string s1;
	s1.assign(cnt1,'1');
	string s2;
	s2.assign(cnt2,'2');
	string s3;
	s3.assign(cnt3,'3');
	string str = s1+s2+s3;
	for(int i=0;i<str.length();i++)
	{
		if(i==str.length()-1)
		cout<<str[i];
		else
		cout<<str[i]<<"+";
	}
	return 0;
}
