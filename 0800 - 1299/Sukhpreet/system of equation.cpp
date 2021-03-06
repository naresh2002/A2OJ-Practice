#include<bits/stdc++.h>
using namespace std;     
int main()
{
        int n,m;
        cin>>n>>m;
        int cnt=0;
        
        for(int a=0;a<=n or a<=m;a++){
            for(int b=0;b<=n or b<=m;b++){
                if(a*a+b==n and a+b*b==m){
                    cnt++;
                }
            }
        }
        
        
        cout<<cnt<<endl;        
}
