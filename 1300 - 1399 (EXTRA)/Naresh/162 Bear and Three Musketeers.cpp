#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;

int check[4005][4005];

int32_t main () {
  int n, m;
  cin >> n >> m;
  vector<int> v[n+5];
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    v[a].PB(b);
    v[b].PB(a);
    check[a][b] = 1;
    check[b][a] = 1;
  }
  
  int ans = 1e9;
  
  for (int i = 0; i <= n; i++) { //  i is first friend
    for (auto x : v[i]) {       //  x is second friend
      for (auto y : v[x]) {     //  y is third firend
        if (check[i][y]) {
          int k = v[i].size() + v[x].size() + v[y].size() - 6;
          ans = min(ans, k);
        }
      }
    }
  }
  if (ans == 1e9) {
    cout << -1;
  }
  else {
    cout << ans;
  }
  
  return 0;
}
