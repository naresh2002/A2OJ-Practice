//65 Shower Line
#include<bits/stdc++.h>
using namespace std;
long long int max1 = INT_MIN;
void permute(string a, int l, int r, long long int g[][5]) 
{ 
	if (l == r) 
    {
    	vector<int > v;
    	for(int i=0;i<5;i++)
    	{
    		//cout<<a[i]-48<<" ";
    		v.push_back(a[i]-49);
		}
		//cout<<endl;
		long long int x1 = (g[v[0]][v[1]] + g[v[1]][v[0]] + g[v[2]][v[3]] + g[v[3]][v[2]]) + (g[v[1]][v[2]] + g[v[2]][v[1]] + g[v[3]][v[4]] + g[v[4]][v[3]]) + (g[v[2]][v[3]] + g[v[3]][v[2]]) + (g[v[3]][v[4]] + g[v[4]][v[3]]);                         
    	max1 = max(max1,x1);
	}
  		
	else
	{ 
		for (int i = l; i <= r; i++) 
		{ 
			swap(a[l], a[i]); 
			permute(a, l+1, r,g); 
			swap(a[l], a[i]); 
		} 
	} 
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str = "12345";
    long long int g[5][5];
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		cin>>g[i][j];
		}
	}
	permute(str, 0, 4,g);
	cout<<max1;
    return 0;
}
