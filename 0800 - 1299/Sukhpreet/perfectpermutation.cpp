#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1 || n % 2 ==1)
	{
		cout<<-1;
		
	}
	else
	{
	for(int i=1;i<n;++i)
	{
		cout<<1+i<<" "<<i<<" ";
		i++;
	}
	}
	return 0;
}
