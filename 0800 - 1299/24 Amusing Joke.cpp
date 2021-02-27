//24 Amusing Joke
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string guest,res,pile;
	cin>>guest>>res>>pile;
	guest += res;
	sort(guest.begin(),guest.end());
	sort(pile.begin(),pile.end());
	if(guest == pile)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
