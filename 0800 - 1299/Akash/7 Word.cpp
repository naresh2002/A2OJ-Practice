//7 Word
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	int upper = 0,lower = 0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65 && s[i]<=90)
		upper++;
		else
		lower++;
	}
	if(upper<=lower)
	transform(s.begin(), s.end(), s.begin(), ::tolower); 
	else
	transform(s.begin(), s.end(), s.begin(), ::toupper); 
	cout<<s;
	return 0;
}
