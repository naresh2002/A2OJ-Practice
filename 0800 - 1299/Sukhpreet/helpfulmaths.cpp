#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[100];
	cin>>arr;
	char a[51];
	int j=0;
	for(int i=0;i<strlen(arr);++i)
	{
		if(isdigit(arr[i]))
		{
			a[j]=arr[i];
			j++;
		}
	}
	cout<<a;
}
