//38 Lucky Division
#include<bits/stdc++.h>
using namespace std;// evenly divided , means just simple division with no remainders
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<long long int > v{4,7,44,47,74,77,444,447,474,744,477,747,774,777};// pre store the lucky number <=1000
	long long int n;
	cin>>n;
	for(int i=0;i<v.size();i++)
	{
		if(n%v[i]==0)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
