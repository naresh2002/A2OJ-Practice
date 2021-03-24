//39 Array
#include<bits/stdc++.h>
using namespace std;// evenly divided , means just simple division with no remainders
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	long long int zero_cnt = 0, neg_cnt = 0, pos_cnt = 0;// neg_cnt = 1, zero_cnt = 1, pos_cnt = 1, | neg_cnt = 3, zero_cnt = 1, pos_cnt = 0
	vector<long long int > zero, neg, pos;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		zero_cnt++;
		else if(a[i]<0)
		neg_cnt++;
		else
		pos_cnt++;
	}
	if(neg_cnt == 1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			neg.push_back(a[i]);
			else if(a[i]==0)
			zero.push_back(a[i]);
			else
			pos.push_back(a[i]);
		}
	}
	else if(neg_cnt==2)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			{
				if(neg.size()<1)
				neg.push_back(a[i]);
				else
				zero.push_back(a[i]);
			}
			else if(a[i]==0)
			zero.push_back(a[i]);
			else
			pos.push_back(a[i]);
		} 
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			{
				if(neg.size()<1)
				neg.push_back(a[i]);
				else if(pos.size()<2)
				pos.push_back(a[i]);
				else
				zero.push_back(a[i]);
			}
			else
			zero.push_back(a[i]);
		} 
	}
	cout<<neg.size()<<" ";
	for(int i=0;i<neg.size();i++)
	{
		cout<<neg[i]<<" ";
	}
	cout<<endl<<pos.size()<<" ";
	for(int i=0;i<pos.size();i++)
	{
		cout<<pos[i]<<" ";
	}
	cout<<endl<<zero.size()<<" ";
	for(int i=0;i<zero.size();i++)
	{
		cout<<zero[i]<<" ";
	}
	return 0;
}
