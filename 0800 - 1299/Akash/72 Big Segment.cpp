//72 Big Segment
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int max1 = INT_MIN,min1 = INT_MAX;
	long long int li[n],ri[n];
	for(int i=0;i<n;i++)
	{
		cin>>li[i]>>ri[i];
		if(li[i]<min1)
		min1 = li[i];
		if(ri[i]>max1)
		max1 = ri[i];
	}
	bool flag = false;
	long long int i;
	for(i=0;i<n;i++)
	{
		if(li[i]==min1 && ri[i]==max1)
		{
			flag = true;
			break;
		}
	}
	if(flag)
	cout<<i+1;
	else
	cout<<-1;
    return 0;
}
