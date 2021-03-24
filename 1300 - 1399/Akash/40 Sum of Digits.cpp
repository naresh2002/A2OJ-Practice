//40 Sum of Digits
#include<bits/stdc++.h>
using namespace std;// evenly divided , means just simple division with no remainders
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	long long int cnt = 0;
	while(s.size()!=1)
	{
		long long int sum1 = 0;
		for(int i=0;i<s.size();i++)
		{
			sum1 += s[i]-'0';
		}
		//cout<<sum1<<endl;
		s = to_string(sum1);
		cnt++;
	}
	cout<<cnt;
	return 0;
}
