//8 Word Capitalization
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	s[0] = toupper(s[0]); //or transform(s.begin(), s.begin()+1, s.begin(), ::toupper); 
	cout<<s;
	return 0;
}
