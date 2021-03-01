#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    cin>>a;
	for(int i=0;i<strlen(a);++i)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O')
			continue;
		else if(a[i]=='u'||a[i]=='U'||a[i]=='y'||a[i]=='Y')
			continue;
		else if(a[i]>=65 && a[i]<=92)
		{
			a[i]=a[i]+32;
		}	
		cout<<"."<<a[i];
	 }
}
