#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char n[102];
	char m[102];
	cin>>n>>m;
	for(int i=0;i<strlen(n);++i)
	{
		if(n[i]!=m[i])
			n[i]='1';
		else
			n[i]='0';	
	}
	cout<<n;
}
