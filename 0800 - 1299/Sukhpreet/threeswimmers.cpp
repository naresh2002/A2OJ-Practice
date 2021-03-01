    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		long long int p,a,b,c;
    		cin>>p>>a>>b>>c;
    		long long int x,y,z;
    		x=p%a;
    		y=p%b;
    		z=p%c;
    		long long int m,q,r;
    		m=a-x;
    		q=b-y;
    		r=c-z;
    		if(x==0 || y==0 || z==0)
    			cout<<"0\n";
    		else if(m<=q && m<=r)
    			cout<<m<<"\n";
    		else if(q<=m && q<=r)
    			cout<<q<<"\n";
    		else if(r<=m && r<=q)
    			cout<<r<<"\n";		
    		
    	}
    }
