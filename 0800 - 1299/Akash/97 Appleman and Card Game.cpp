//97 Appleman and Card Game
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, long long int>& a,pair<char, long long int>& b) 
{ 
    return a.second > b.second; 
}
vector<pair<char, long long int> > A; 
void sort1(map<char, long long int>& M) 
{ 
    for (auto& it : M)
	{ 
        A.push_back(it); 
    } 
    sort(A.begin(), A.end(), cmp); 
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char , long long int > mp;
    for(int i=0;i<n;i++)
    {
    	mp[s[i]]++;
	}
	sort1(mp);
	long long int cnt = 0;
	for(int i=0;i<A.size();i++)
	{
		//cout<<A[i].first<<" "<<A[i].second<<endl;
		if(k>=A[i].second)
		{
			cnt += (A[i].second*A[i].second);
			k -= A[i].second;
		}
		else
		{
			cnt += (k*k);
			break;
		}
	}
	cout<<cnt;
    return 0;
}
