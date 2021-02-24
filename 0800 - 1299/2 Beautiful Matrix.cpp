//2 Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i1 = 0,j1 = 0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			int a;
			cin>>a;
			if(a!=0)
			{
				i1 = i;
				j1 = j;
			}
		}
	}
	cout<<abs(i1-2) + abs(j1-2);
	return 0;
}
