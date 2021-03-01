#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[200];
	cin>>arr;
	int length=strlen(arr);
	int a[200];
	int  j=0;
	int k=0;
	for(int i=0;i<length;++i)
	{
		if(i!=length-1 && arr[i]=='-' && arr[i+1]=='-')
		{
			a[j]=2;
			j++;
			i++;	
			k++;

		}
		else if(i!=length-1 && arr[i]=='-' && arr[i+1]=='.')
		{
			a[j]=1;
			j++;
			i++;
			k++;
		}
		else if(arr[i]=='.')
		{
			a[j]=0;
			j++;
			k++;
		}	
	}
	for(int i=0;i<k;++i)
	{
		
		cout<<a[i];
	}
}
