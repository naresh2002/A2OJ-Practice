//74 Yaroslav and Permutations
#include<bits/stdc++.h>//ques from geeksforgeeks
using namespace std;
void distinctAdjacentElement(long long int a[], long long int n) 
{ 
    map<long long int, long long int> m; 
    for (int i = 0; i < n; ++i) 
        m[a[i]]++; 
    long long int mx = 0; 
    for (int i = 0; i < n; ++i) 
        if (mx < m[a[i]]) 
            mx = m[a[i]]; 
    if (mx > (n + 1) / 2) 
        cout << "NO"; 
    else
        cout << "YES"; 
}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	set<long long int > st;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	distinctAdjacentElement(a,n);
    return 0;
}
