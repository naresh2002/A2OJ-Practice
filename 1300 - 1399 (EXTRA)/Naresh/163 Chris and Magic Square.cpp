#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int n;
  cin >> n;
  int a[n][n];
  int r, c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; i++) {
      cin >> a[i][i];
      if (a[i][j] == 0) {
        r = i;
        c = j;
      }
    }
  }
  if (n > 2) {
    vector<int> sum;
    for (int i = 0; i < n; i++) {
      int k = 0;
      if (i != r) {
        for (int j = 0; j < n; j++) {
          k += a[i][j];
        }
        sum.PB(k);
      }
    }
  }
  
  return 0;
}
