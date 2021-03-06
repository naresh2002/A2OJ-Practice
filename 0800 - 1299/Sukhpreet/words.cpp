#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[100];
	cin>>arr;
	int lowercase=0;
	int uppercase=0;
	for(int i=0;i<strlen(arr);++i)
	{
		if(arr[i]>='A' && arr[i]<='Z')
		uppercase++;
		else
		lowercase++;
			
	}
	int x=strlen(arr);
	char ans[x];
	if(lowercase>=uppercase)
	{
		for(int i=0;i<x;++i)
		{
			if(isupper(arr[i]))
			 	arr[i]=tolower(arr[i]);	
		}
	}
	else 
	{
		for(int i=0;i<x;++i)
		{
			if(islower(arr[i]))
				arr[i]=toupper(arr[i]);	
		}
	
	}
	cout<<arr;
}
