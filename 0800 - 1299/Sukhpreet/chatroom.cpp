#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char s[1000];
	cin>>s;
	int count=0;
	int x=0;
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i]=='h')
		{
			count=i;
			x++;
			break;
		}
	}
	for(int i=count+1;i<strlen(s);++i)
	{
		if(s[i]=='e')
		{
			count=i;
			x++;
			break;
		}
	}
	for(int i=count+1;i<strlen(s);++i)
	{
		if(s[i]=='l')
		{
			count=i;
			x++;
			break;
		}
	}for(int i=count+1;i<strlen(s);++i)
	{
		if(s[i]=='l')
		{
			count=i;
			x++;
			break;
		}
	}for(int i=count+1;i<strlen(s);++i)
	{
		if(s[i]=='o')
		{
			count=i;
			x++;
			break;
		}
	}
	if(x==5)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
}
