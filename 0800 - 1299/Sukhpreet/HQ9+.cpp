#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[101];
	cin>>arr;
	int count=0;
	for(int i=0;i<strlen(arr);++i)
	{
		if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9')
		{
			count=1;
			break;	
		}	
	}
	if(count==1)
		cout<<"YES";
	else
		cout<<"NO";	
}
