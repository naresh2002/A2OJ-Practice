//49 Dubstep
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	if(s.length()<3)
	cout<<s;
	else
	{
		long long int i = 0;
		while(true)
		{
			if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
			s.replace(i,3,"");
			else
			break;
		}
		//cout<<s<<endl;
		string s1 = s;
		reverse(s1.begin(),s1.end());
		i = 0;
		while(true)
		{
			if(s1[i]=='B' && s1[i+1]=='U' && s1[i+2]=='W')
			s1.replace(i,3,"");
			else
			break;
		}
		//cout<<s1<<endl;
		reverse(s1.begin(),s1.end());
		//s= s1;
		//cout<<s<<endl;
		bool pre1 = true;
		while(pre1)
		{
			size_t idx1 = s1.find("WUB");
			if(idx1==string::npos)
			pre1 = false;
			else
			{
				s1.replace(idx1, 3, " ");
			}
			idx1 += 1;
		}
		cout<<s1;
	}
    return 0;
}
