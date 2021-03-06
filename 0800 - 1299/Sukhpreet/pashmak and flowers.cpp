#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int> a(n);
	map<long long int,long long int> m;
	for(long long int i=0;i<n;i++) {
		cin>>a[i];
		m[a[i]]++;
	}
	sort(a.begin(), a.end());
	long long int diff = a[n-1]-a[0], cnt;
	if(a[0]==a[n-1]){
		cnt = m[a[0]] * (m[a[n-1]]-1) / 2;
	}
	else cnt = m[a[0]] * m[a[n-1]];
	
	
	cout<<diff<<" "<<cnt;
}
