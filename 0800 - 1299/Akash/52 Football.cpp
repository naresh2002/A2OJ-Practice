//52 Football
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	long long int cnt = 1,max_cnt = INT_MIN;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			cnt++;
			max_cnt = max(max_cnt,cnt);
		}
		else
		cnt = 1;
	}
	if(max_cnt>=7)
	cout<<"YES";
	else
	cout<<"NO";
    return 0;
}
