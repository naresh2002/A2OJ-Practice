//68 Letter
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
//	cout<<s1<<endl;
//	cout<<s2<<endl;
	long long int a[s1.length()] = {0};
//	for(int i=0;i<s1.length();i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	bool flag = true;
	for(int i=0;i<s2.length();i++)
	{
		//cout<<s2[i]<<" ";
		if(s2[i]!=' ')
		{
			size_t it = s1.find(s2[i]);
			if(it!=string::npos)
			{
				s1.erase(s1.begin() + it);
			}
			else
			{
				flag = false;
				break;
			}
			//cout<<s1<<endl;
		}
		
	}
	if(!flag)
	cout<<"NO";
	else
	cout<<"YES";
    return 0;
}
