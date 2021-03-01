//32 Jzzhu and Children
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int n,m;
    cin>>n>>m;
    vector< pair< long long int , long long int > > v;
    for(int i=0;i<n;i++)
    {
    	long long int a;
    	cin>>a;
    	v.push_back({a,i});
	}
	long long int i=0;
	while(v.size()>1)
	{
		if(v[0].first<=m)
		{
			v.erase(v.begin());
		}
		else
		{
			v.push_back({v[0].first-m,v[0].second});
			v.erase(v.begin());
		}
	}
	cout<<v[0].second + 1;
    return 0;
}
/* //---- using queue
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,arr[101],i,j = 0;
    cin>>n>>m;
    queue< pair< long long int , long long int > > q;//queue ke andar element aur index dono push karna tha isliye , queue ko aise declare kiya
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        q.push({arr[i],i});// queue me array element , index push kiya
    }
    while(q.size()>1)// while loop tab tak chalaya jab tak queue me sirf ek element nahi bach jaata, agr ek element bachega toh uska index print kardenge
	{
		if(q.front().first<=m) // queue ke first element ke array ki value <= m hogi , toh queue se pop kardenge
		{
			q.pop();
		}
		else // nahi toh uss me se m minus karke push kardenge queue me, aur first element of queue ko pop kardenge
		{
			q.push({q.front().first-m,q.front().second});
			q.pop();
		}
	}
	cout<<q.front().second;// ek element bacha queue me , isliye uska index print kardenge
	return 0;
}
*/
