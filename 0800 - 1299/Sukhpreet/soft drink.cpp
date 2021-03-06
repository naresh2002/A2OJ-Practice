#include <bits/stdc++.h>   
using namespace std;     
int main()
{
        int  n, k, l, c, d, p, nl, np,drink,slice,salt,ans;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        drink=(k*l)/nl;
        slice=(c*d);
        salt=p/np;
        ans=min(slice,salt);
        ans=min(ans,drink);
        ans/=n;
        cout<<ans<<endl;
     
}
