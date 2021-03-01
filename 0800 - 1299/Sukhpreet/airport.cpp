#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n, m;
        cin >> n >> m;
        vector<int> vec1, vec2;
        for (int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            vec1.push_back(a);
        }
        vec2=vec1;
        int j=1;
        int maxcount=0;
        int mincount=0;
        for (int i=1;i<=n;i++)
        {  
            sort(vec1.begin(),vec1.end(),greater<int>());
            if (vec1[0]==0)
            {
                vec1.erase(vec1.begin());
            }
            maxcount+=vec1[0];
            vec1[0]--;
        }
        cout <<maxcount<<" ";
        for (int i=1;i<=n;i++)
        {
            sort(vec2.begin(),vec2.end());
            if (vec2[0]==0)
            {
                vec2.erase(vec2.begin());
            }
            mincount+=vec2[0];
            vec2[0]--;
        }
        cout << mincount;
     
        return 0;
    }
