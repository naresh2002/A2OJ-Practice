//55 Present from Lena
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n;
	cin>>n;
//	long long int a[2*n+1][2*n+1];
//	for(int i=0;i<2*n+1;i++)
//	{
//		for(int j=0;j<2*n+1;j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
	if(n==2)
	{
		cout<<"    0"<<endl;
		cout<<"  0 1 0"<<endl;
		cout<<"0 1 2 1 0"<<endl;
		cout<<"  0 1 0"<<endl;
		cout<<"    0"<<endl;
	}
	if(n==3)
	{
		cout<<"      0"<<endl;
		cout<<"    0 1 0"<<endl;
		cout<<"  0 1 2 1 0"<<endl;
		cout<<"0 1 2 3 2 1 0"<<endl;
		cout<<"  0 1 2 1 0"<<endl;
		cout<<"    0 1 0"<<endl;
		cout<<"      0"<<endl;
	}
	if(n==4)
	{
		cout<<"        0"<<endl;
		cout<<"      0 1 0"<<endl;
		cout<<"    0 1 2 1 0"<<endl;
		cout<<"  0 1 2 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 2 1 0"<<endl;
		cout<<"    0 1 2 1 0"<<endl;
		cout<<"      0 1 0"<<endl;
		cout<<"        0"<<endl;
	}
	if(n==5)
	{
		cout<<"          0"<<endl;
		cout<<"        0 1 0"<<endl;
		cout<<"      0 1 2 1 0"<<endl;
		cout<<"    0 1 2 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 2 1 0"<<endl;
		cout<<"      0 1 2 1 0"<<endl;
		cout<<"        0 1 0"<<endl;
		cout<<"          0"<<endl;
	}
	if(n==6)
	{
		cout<<"            0"<<endl;
		cout<<"          0 1 0"<<endl;
		cout<<"        0 1 2 1 0"<<endl;
		cout<<"      0 1 2 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 2 1 0"<<endl;
		cout<<"        0 1 2 1 0"<<endl;
		cout<<"          0 1 0"<<endl;
		cout<<"            0"<<endl;
	}
	if(n==7)
	{
		cout<<"              0"<<endl;
		cout<<"            0 1 0"<<endl;
		cout<<"          0 1 2 1 0"<<endl;
		cout<<"        0 1 2 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"        0 1 2 3 2 1 0"<<endl;
		cout<<"          0 1 2 1 0"<<endl;
		cout<<"            0 1 0"<<endl;
		cout<<"              0"<<endl;
	}
	if(n==8)
	{
		cout<<"                0"<<endl;
		cout<<"              0 1 0"<<endl;
		cout<<"            0 1 2 1 0"<<endl;
		cout<<"          0 1 2 3 2 1 0"<<endl;
		cout<<"        0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"        0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"          0 1 2 3 2 1 0"<<endl;
		cout<<"            0 1 2 1 0"<<endl;
		cout<<"              0 1 0"<<endl;
		cout<<"                0"<<endl;
	}
	if(n==9)
	{
		cout<<"                  0"<<endl;
		cout<<"                0 1 0"<<endl;
		cout<<"              0 1 2 1 0"<<endl;
		cout<<"            0 1 2 3 2 1 0"<<endl;
		cout<<"          0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"        0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0"<<endl;
		cout<<"0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0"<<endl;
		cout<<"  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0"<<endl;
		cout<<"    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"<<endl;
		cout<<"      0 1 2 3 4 5 6 5 4 3 2 1 0"<<endl;
		cout<<"        0 1 2 3 4 5 4 3 2 1 0"<<endl;
		cout<<"          0 1 2 3 4 3 2 1 0"<<endl;
		cout<<"            0 1 2 3 2 1 0"<<endl;
		cout<<"              0 1 2 1 0"<<endl;
		cout<<"                0 1 0"<<endl;
		cout<<"                  0"<<endl;
	}
	return 0;
}
