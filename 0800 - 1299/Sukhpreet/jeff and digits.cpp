#include<bits/stdc++.h>
using namespace std;
int main()
{
    	int n;
    	cin>>n;
    	vector<int>a(n);
    	for(int i = 0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	int c=0;
    	int b=0;
    	for(int i=0;i<n;i++) 
    	{
    		if(a[i]==0) 
    		{
    			b++;
    		}
    		else 
    		{
    			c++;
    		}
    	}
    	if (b==0) 
    	{
    		cout<<-1<<endl;
    		return 0;
    	}
    	if (c==0) 
    	{
    		if(b!=0) 
    		{
    			cout<<0<<endl;
    		}
    		else 
    		{
    			cout<<-1<<endl;
    		}
    		return 0;
    	}
    	if (c*5%9==0) 
    	{	
    		for (int i=0;i<c;i++) 
    		{
    			cout<<5;
    		}
    		for (int i=0;i<b;i++) 
    		{
    			cout<<0;
    		}
    		return 0;
    	}
    	
    	for (int i=c-1;i>=1;i--) 
    	{
    		if ((i*5)%9==0) 
    		{
    			for (int j = 0; j < i; j++) 
    			{
    				cout << 5;
    			}
    			for (int j = 0; j < b; j++) 
    			{
    				cout << 0;
    			}
    			return 0;
    		}
    	}
    	if (b != 0) {
    		cout << 0 << endl;
    	}
    	else {
    		cout << -1 << endl;
    	}
    	return 0;
    }
