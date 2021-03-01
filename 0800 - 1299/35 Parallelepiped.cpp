//35 Parallelepiped
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//a,b,c as length of sides - sum of all 12 sides = 4*(a+b+c)
    // a*b = x, b*c = y, c*a = z
    // then a = sqrt(x*z/y), b = sqrt(x*y/z), c = sqrt(y*z/x)
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int a = sqrt(x*z/y);
    long long int b = sqrt(x*y/z);
    long long int c = sqrt(y*z/x);
    cout<<4*(a+b+c);
    return 0;
}
