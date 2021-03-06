#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[4][4];
	for(int i=0;i<4;++i)
	{
		for(int j=0;j<4;++j)
			cin>>arr[i][j];
	}	
	int counthash=0;
	int countdot=0;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
		     	 counthash=0;
            		 countdot=0;
			 if(arr[i][j]=='#')
				counthash++;
			 else
			 	countdot++;			
			 if(arr[i][j+1]=='#')
			 	counthash++;
			 else
			 	countdot++;			
			 if(arr[i+1][j]=='#')
			 	counthash++;
			 else
			 	countdot++;			
			 if(arr[i+1][j+1]=='#')
			 	counthash++;
			 else
				countdot++;			
			 if(counthash>=3 || countdot>=3)
			 {
				break;
			 }		
		}
		if(counthash>=3 || countdot>=3)
		{
			break;
		}		
	}
	if(counthash>=3 || countdot>=3)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
		
}
