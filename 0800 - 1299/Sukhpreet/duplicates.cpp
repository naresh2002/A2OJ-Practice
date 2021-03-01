//basic approach using O(NlogN) sorting technique
#include<bits/stdc++.h>
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

    sort(arr,arr+n);
    for(int i=0;i<n-1;++i)
    {
        if(arr[i]==arr[i+1])
            {
                cout<<arr[i];
                break;
            }
    }
}


//second approach using hashing

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void duplicates(int a[],int n)
{
    unordered_map<int,int> freq;
    for(int i=0;i<n;++i)
    {
        freq[a[i]]++;
    }
    unordered_map<int,int>::iterator iter;
    for(iter=freq.begin();iter!=freq.end();iter++)
    {
        if(iter->second>1)
            {
                cout<<iter->first;
                break;
            }
    }
       
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    cin>>arr[i];
    duplicates(arr,n);
    return 0;
}

//third approach changing signs

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        if(arr[abs(arr[i])]>=0)
            {
                arr[abs(arr[i])]=-arr[abs(arr[i])];
            }
        else
            {
                cout<<abs(arr[i]);
                break;
            }
            
    }
    return 0;
}

//changing array positioning
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;    
    }
    for(int i=0;i<n;++i)
    {
        if(arr[i]>=2*n)
            {
                cout<<i;
                break;
            }    
    }
    return 0;
}


