//43 Translation
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string Berlandish,Birlandish;
	cin>>Berlandish>>Birlandish;
	reverse(Berlandish.begin(),Berlandish.end());
	if(Berlandish == Birlandish)
	cout<<"YES";
	else
	cout<<"NO";
    return 0;
}
