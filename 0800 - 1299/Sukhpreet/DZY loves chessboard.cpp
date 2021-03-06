#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
        vector<string> a;
    	for(int i=0;i<n;i++)
   	{
        	string k;
        	cin>>k;
       		a.push_back(k);
    	}
    	for(int i=0;i<n;i++)
    	{
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                if((i+j)%2==0) 
                	a[i][j]='B';
                else 
                	a[i][j]='W';
            }
        }
    	}
 	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
}	
