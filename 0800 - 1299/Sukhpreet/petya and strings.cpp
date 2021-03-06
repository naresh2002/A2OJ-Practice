#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char a[1000];
	char b[1000];
	cin>>a;
	cin>>b;
	for(int i=0;i<strlen(a);++i)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]+=32;
		if(b[i]>='A' && b[i]<='Z')
			b[i]+=32;
	}
	cout<<strcmp(a,b);
}
