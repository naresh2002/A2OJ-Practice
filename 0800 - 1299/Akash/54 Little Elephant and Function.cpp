//54 Little Elephant and Function
#include<bits/stdc++.h>
using namespace std;
//void func(long long int a[ ],int n)
//{
////	for(int i=0;i<10;i++)
////	{
////		cout<<a[i]<<" ";
////	}
////	cout<<endl;
//	if(n==0)
//	return;
//	func(a,n-1);
//	swap(a[n],a[n-1]);
////	for(int i=0;i<10;i++)
////	{
////		cout<<a[i]<<" ";
////	}
////	cout<<endl;
//}
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		cout<<n<<" ";
		else
		cout<<i<<" ";
	}
//	long long int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
	//func(a,n-1);
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
    return 0;
}
