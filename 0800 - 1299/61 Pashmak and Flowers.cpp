//61 Pashmak and Flowers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n;
    cin>>n;
    long long int b[n];
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
	}
	long long int max11 = *max_element(b,b+n);
	long long int min11 = *min_element(b,b+n);
	long long int cnt_max=0,cnt_min=0;
	for(int i=0;i<n;i++)
	{
		if(b[i] == max11)
		cnt_max++;
		if(b[i] == min11)
		cnt_min++;
	}
	if(max11==min11)
	cout<<0<<" "<<n*(n-1)/2;
	else
	cout<<max11-min11<<" "<<cnt_max*cnt_min;
    return 0;
}
