//95 Polo the Penguin and Matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int n,m,d;
    cin>>n>>m>>d;
    int p[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
        {
        	cin>>p[i][j];
		}
	}
    int x=p[0][0];
    bool ok=1;
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
        {
        	if((p[i][j]-x)%d!=0)
           {
               ok=0;
               break;
           }
		}
	}
    if(!ok)  
	cout<<-1<<endl;
    else
    {
	    vector<int>  v;
	    for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<m;j++)
	        {
	        	v.push_back((p[i][j]-x)/d);
			}
		}
	    sort(v.begin(),v.end());
	    int size=v.size();
	    int   ans=0;
	    x=v[size/2];
	    for(int i=0;i<size;i++)
        {
        	ans+=abs(v[i]-x);
		}
        cout<<ans<<endl;
    }
    return 0;
}
