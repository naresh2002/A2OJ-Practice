//98 Sort the Array
#include<bits/stdc++.h>
using namespace std;
long long int srt,ed;
// Return true, if reversing the subarray will 
// sort the array, else return false. 
bool checkReverse(long long int arr[], long long int n) 
{ 
	// Copying the array. 
	long long int temp[n]; 
	for (int i = 0; i < n; i++) 
		temp[i] = arr[i]; 

	// Sort the copied array. 
	sort(temp, temp + n); 

	// Finding the first mismatch. 
	long long int front; 
	for (front = 0; front < n; front++) 
		if (temp[front] != arr[front]) 
			break; 

	// Finding the last mismatch. 
	long long int back; 
	for (back = n - 1; back >= 0; back--) 
		if (temp[back] != arr[back]) 
			break; 
	srt = front;
	ed = back;
	//cout<<front<<" "<<back<<endl;
	// If whole array is sorted 
	if (front >= back) 
		return true; 

	// Checking subarray is decreasing or not. 
	do
	{ 
		front++; 
		if (arr[front - 1] < arr[front]) 
			return false; 
	} while (front != back); 

	return true; 
} 
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int n;
	cin>>n;
	long long int a[n];
	vector<long long int > start1,end1;
	bool flag1 = false, flag2 = false;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(checkReverse(a,n))
	{
		if(srt==n && ed == -1)
		cout<<"yes\n1 1";
		else
		cout<<"yes\n"<<srt+1<<" "<<ed+1;
	}
	else
	cout<<"no";
    return 0;
}
