#include<iostream>
#include<math.h>
using namespace std;
bool answer(int n)
{
	bool prime=true;
	for(int i=2;i<=sqrt(n);i++)
	{
  		if(n%i==0)
  		{
   			prime=false;
   		break;
  		}
	}
 	return prime;
}
int main()
{
	int n,m,i;
	bool count=0;
    	cin>>n>>m;
    	if(answer(m)==true)
    	{
        	for(i=n+1;i<m;i++)
        		if(answer(i)==true)
        		{
            			cout<<"NO";
            			count=1;
          			break;
        		}
        	if(count==0)
            		cout<<"YES";
    	}
    	else
        	cout<<"NO";
    return 0;
}  
