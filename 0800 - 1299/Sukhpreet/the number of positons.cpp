#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int count=0;
	for(int x=a;x<=n-1;++x)
    	{
        	for(int y=n-x-1;y<=b && y>=0;++y)
       		{
       			if(x+y+1==n)
                		++count;
        	}
    	}
    	cout<<count;
}
