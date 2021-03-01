#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int n, k;
  cin >> n >> k;
  int a[n];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (5 - a[i] >= k) {
      cnt++;
    }
  }
  cout << cnt / 3;
  
  return 0;
}
