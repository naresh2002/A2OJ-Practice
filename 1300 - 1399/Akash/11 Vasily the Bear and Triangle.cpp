//11 Vasily the Bear and Triangle
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int x,y;
	cin>>x>>y;
	long long int x1 = abs(x), y1 = abs(y);
	long long int ind = max(x1,y1) + min(x1,y1);
	if(x>0)
	{
		if(y>0)// first quadrant
		{	
			cout<<0<<" "<<ind<<" "<<ind<<" "<<0;
		}
		else// fourth quadrant
		{
			cout<<0<<" "<<-ind<<" "<<ind<<" "<<0;
		}
	}
	else
	{
		if(y>0)// second quadrant
		{
			cout<<-ind<<" "<<0<<" "<<0<<" "<<ind;
		}
		else// third quadrant
		{
			cout<<-ind<<" "<<0<<" "<<0<<" "<<-ind;
		}
	}
	return 0;
}
