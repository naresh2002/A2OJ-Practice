//9 Nearly Lucky Number
//lucky no - when only lucky no (4,7) are present
//nearly lucky no - when lucky no (4,7) are present 4 or 7 no of times

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	ostringstream str1; 
    str1 << n; 
    string s = str1.str(); 
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='4' || s[i]=='7')
    	cnt++;
	}
	if(cnt==4 || cnt==7)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
