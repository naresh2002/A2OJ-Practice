//12 Cakeminator
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int r,c;
	cin>>r>>c;
	int a[r][c];
	map<int , int > mpr, mpc; 
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			char c;
			cin>>c;
			if(c=='.')
			a[i][j]=0;
			else
			{
				mpr[i]++;
				mpc[j]++;
				a[i][j]=-1;
			}
		}
	}
	for(int i=0;i<r;i++)
	{
		if(mpr[i]==0)
		{
			for(int j=0;j<c;j++)
			{
				a[i][j]++;
			}
		}
	}
	for(int j=0;j<c;j++)
	{
		if(mpc[j]==0)
		{
			for(int i=0;i<r;i++)
			{
				a[i][j]++;
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]>0)
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
