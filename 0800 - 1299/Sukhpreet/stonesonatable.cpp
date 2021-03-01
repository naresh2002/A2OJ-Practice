#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	int count=0;
	for(int i=0;i<n-1;++i)
	{	
		if(arr[i]==arr[i+1])
			count++;
			
	}
	cout<<count;
}
