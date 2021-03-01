#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <pair<int,int>> points;
	int a,b;
	for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		points.push_back(make_pair(a,b));
	}
	int count=0;
	for(int i=0;i<n;++i)
	{
		bool up=false,down=false,left=false,right=false;
		for(int j=0;j<n;++j)
		{
			if(points[i].first==points[j].first && points[i].second>points[j].second)
				down=true;
			else if(points[i].first==points[j].first && points[i].second<points[j].second)	
				up=true;
			else if(points[i].first>points[j].first && points[i].second==points[j].second)	
				left=true;
			else if(points[i].first<points[j].first && points[i].second==points[j].second)	
				right=true;
			if(up && down && left && right)
				break;
		}		
		if(up && down && left && right)
			count++;
	}
	cout<<count;
}

