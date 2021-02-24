//5 Beautiful Year
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int y;
	cin>>y;
	for(int i=y+1;i<=9012;i++)
	{
		// declaring output string stream 
	    ostringstream str1; 
	    // Sending a number as a stream into output 
	    // string 
	    str1 << i; 
	    // the str() coverts number into string 
	    string s = str1.str(); 
	    set<char > st;
	    for(int i=0;i<s.length();i++)
	    st.insert(s[i]);
	    if(st.size()==4)
	    {
	    	cout<<s;
	    	break;
		}
	}
	return 0;
}
