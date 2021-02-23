#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int n, m;
  cin >> n >> m;
  cout << max(n, m) - 1 << " " << min(n, m);
  
  return 0;
}
