#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[1001];
	cin>>s;
	int arr[26]={0};
	for(int i=0;i<strlen(s);++i)
	{
		arr[s[i]-97]++;
	}
	int count=0;
	string ans="";
        for(int i=0;i<26;i++)
        {
        	if(arr[i]>0)
        	{
            		if(arr[i]%n==0)
               		 	for(int j=0;j<arr[i]/n;j++)
                    		ans+=char(i+97);
                else
                	count=-1;
                }
    	}
        if(count==-1)
        cout<<-1;
    else
    {
        for(int i=0;i<n;i++)
            cout<<ans;
    }

}	
