#include<iostream>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n;
	cin>>n;
	long long int arr[n],num;
	for (int i = 0; i < n; i++) 
	{
 	       cin>>num;
 	       arr[num] = i + 1;
 	}   
 	long long int count1 = 0, count2 = 0;
    	int m,q;
    	cin>>m;
    	for (int i = 0; i < m; i++) 
    	{
      		cin>>q;
        	count1 += arr[q];
       		count2 += n-arr[q]+1;             
    	}
    	
    	cout<<count1<<" "<<count2; 
}
