//78 Two Bags of Potatoes
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int y,k,n;
	cin>>y>>k>>n;// do by multiples of k
	long long int i = 1;
	bool flag = false;
	while(k*i<=n)
	{
		if((k*i)>y)
		{
			flag = true;
			cout<<(k*i)-y<<" ";
		}
		i++;
	}
	if(!flag)
	cout<<-1;
    return 0;
}
