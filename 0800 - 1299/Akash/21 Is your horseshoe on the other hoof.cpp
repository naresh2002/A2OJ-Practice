//21 Is your horseshoe on the other hoof?
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	set<int > s;
	s.insert(s1);
	s.insert(s2);
	s.insert(s3);
	s.insert(s4);
	cout<<4-s.size();
	return 0;
}
