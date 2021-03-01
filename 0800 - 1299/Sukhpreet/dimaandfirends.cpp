#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum=0,ans=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	n++;
	for(int x=1;x<=5;x++){
		if((sum+x)%n!=1){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
