//45 Pashmak and Garden
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	long long int diffx = x2-x1, diffy = y2-y1;
	if(diffx!=0 && diffy!=0 && abs(diffx)!=abs(diffy))
	{
		cout<<-1;
		return 0;
	}
	if(diffx==0)
	{
		cout<<x1+diffy<<" "<<y1<<" "<<x2+diffy<<" "<<y2;
	}
	else if(diffy==0)
	{
		cout<<x1<<" "<<y1+diffx<<" "<<x2<<" "<<y2+diffx;
	}
	else if(abs(diffx)==abs(diffy))
	{
		if(diffx>0 && diffy>0)// first quadrant
		cout<<x1<<" "<<y1+abs(diffx)<<" "<<x1+abs(diffx)<<" "<<y1;
		else if(diffx<0 && diffy>0)// second quadrant
		cout<<x1<<" "<<y1+abs(diffx)<<" "<<x1-abs(diffx)<<" "<<y1;
		else if(diffx<0 && diffy<0)// third quadrant
		cout<<x1-abs(diffx)<<" "<<y1<<" "<<x1<<" "<<y1-abs(diffx);
		else// fourth quadrant
		cout<<x1+abs(diffx)<<" "<<y1<<" "<<x1<<" "<<y1-abs(diffx);
	}
	return 0;
}
