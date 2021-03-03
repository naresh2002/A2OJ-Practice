//42 Magic Numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	long long int n;
	cin>>n;
	// declaring output string stream 
    ostringstream str1; 
    // Sending a number as a stream into output string 
    str1 << n;
    // the str() coverts number into string 
    string s = str1.str();
    set<char > st;
    st.insert(s.begin(),s.end());
    if(st.size()>2)
    cout<<"NO";
    else
    {
    	bool pre2 = true;
		while(pre2)
		{
			size_t idx = s.find("144");
			if(idx==string::npos)
			pre2 = false;
			else
			{
				s.replace(idx, 3, "H");
			}
			idx += 1;
		}
		//cout<<s<<endl;
		bool pre1 = true;
		while(pre1)
		{
			size_t idx1 = s.find("14");
			if(idx1==string::npos)
			pre1 = false;
			else
			{
				s.replace(idx1, 2, "H");
			}
			idx1 += 1;
		}
		//cout<<s<<endl;
		bool pre0 = true;
		while(pre0)
		{
			size_t idx2 = s.find("1");
			if(idx2==string::npos)
			pre0 = false;
			else
			{
				s.replace(idx2, 1, "H");
			}
		}
		//cout<<s<<endl;
		bool flag = true;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='H')
			flag = false;
		}
		if(!flag)
		cout<<"NO";
		else
		cout<<"YES";
	}
    return 0;
}
