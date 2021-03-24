//33 Life Without Zeros
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int a,b;
	cin>>a>>b;
	long long int c = a + b;
	string a1 = to_string(a),a2="";
	string b1 = to_string(b),b2="";
	string c1 = to_string(c),c2="";
	for(int i=0;i<a1.length();i++)
	{
		if(a1[i]!='0')
		a2+=a1[i];
	}
	for(int i=0;i<b1.length();i++)
	{
		if(b1[i]!='0')
		b2+=b1[i];
	}
	for(int i=0;i<c1.length();i++)
	{
		if(c1[i]!='0')
		c2+=c1[i];
	}
	long long int a3 = stoi(a2);
	long long int b3 = stoi(b2);
	long long int c3 = stoi(c2);
//	cout<<a2<<" "<<b2<<" "<<c2<<endl;
//	cout<<a3<<" "<<b3<<" "<<c3<<endl;
	if((a3+b3)==c3)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
