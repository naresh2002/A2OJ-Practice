//73 Little Elephant and Bits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	size_t it = s.find('0');// always delete first 0
	if(it!=string::npos)
	{
		s.erase(s.begin()+it);
	}
	else// if all 1's , delete any 1
	{
		s.erase(s.end()-1);
	}
	cout<<s;
    return 0;
}
