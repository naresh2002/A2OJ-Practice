#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    bool a[3][3]={};
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j){
            cin>>arr[i][j];
            a[i][j] = 1;
        } 
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            if(arr[i][j]%2 == 1){
                a[i][j] = !a[i][j];
                if(j-1 >= 0)
                a[i][j-1] = !a[i][j-1];
                if(i-1 >= 0)
                a[i-1][j] = !a[i-1][j];
                if(j+1 < 3)
                a[i][j+1] = !a[i][j+1];
                if(i+1 < 3)
                a[i+1][j] = !a[i+1][j];
            }
        }
    }
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j)
            cout<<a[i][j];
        cout<<"\n";
    }
}
