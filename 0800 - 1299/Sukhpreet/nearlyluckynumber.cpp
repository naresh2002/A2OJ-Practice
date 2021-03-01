#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int count=0;
	while(n!=0)
	{
		int x=n%10;
		n/=10;
		if(x==4 || x==7)
		count++;
		
	}
	if(count==4 || count==7)
		cout<<"YES";
	else
		cout<<"NO";
}			

