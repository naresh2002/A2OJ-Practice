#include<iostream>
using namespace std;
int main()
{
	 int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;++i)
	 {
	 	cin>>arr[i];
	 }
	 int minindex1=-1;
	 int minindex2=-1;
	 int min=10000;
	 for(int i=0;i<n-1;++i)
	 {
	 	if(min>abs(arr[i+1]-arr[i]))
	 	{
	 		min=abs(arr[i+1]-arr[i]);
	 		minindex1=i;
	 		minindex2=i+1;
	 	} 	
	 }
	 if(abs(arr[n-1]-arr[0])<min)
	 {
	 	min=abs(arr[n-1]-arr[0]);
	 	minindex1=n-1;
	 	minindex2=0;
	 }
	 cout<<minindex2+1<<" "<<minindex1+1;
}
