//69 Kitahara Haruki's Gift
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int w[n],sum1 = 0, sum2 = 0, x1 = 0,x2 = 0;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
		if(w[i]==100)
		{
			x1++;
			sum1+=100;
		}
		else
		{
			x2++;
			sum2+=200;
		}
	}
//	cout<<x1<<" "<<sum1<<endl;
//	cout<<x2<<" "<<sum2<<endl;
	if(x1==0)
	{
		//cout<<"if\n";
		if(x2%2!=0)
		cout<<"NO";
		else
		cout<<"YES";
	}
	else if(x2 == 0)
	{
		//cout<<"else if1\n";
		if(x1%2!=0)
		cout<<"NO";
		else
		cout<<"YES";
	}
	else if(x1%2==0 && x2%2==0)
	{
		//cout<<"else if2\n";
		cout<<"YES";
	}
	else if(sum1 == sum2)
	{
		cout<<"YES";
	}
	else
	{
		//cout<<"else\n";
		bool flag = false;
		if(sum1>sum2)
		{
			//cout<<"if\n";
			while(sum1>sum2)
			{
				sum1-=100;
				sum2+=100;
			}
			if(sum1 == sum2)
			flag = true;
			else if((sum2-sum1)==100)
			flag = false;
			else if((sum2-sum1)==200)
			flag = true;
		}
		else
		{
			//cout<<"else\n";
			while(sum2>sum1)
			{
				sum2-=200;
				sum1+=200;
			}
			//cout<<sum1<<" "<<sum2<<endl;
			if(sum1 == sum2)
			flag = true;
			else if((sum1-sum2)==100)
			flag = false;
			else if((sum1-sum2)==200)
			flag = true;
		}
		if(flag)
		cout<<"YES";
		else
		cout<<"NO";
	}
    return 0;
}
