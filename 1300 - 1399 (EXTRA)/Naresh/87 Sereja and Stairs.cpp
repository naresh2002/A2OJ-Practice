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
  map<int, int> m1;
  map<int, int, greater<int>> m2;
  int temp;
  int m = -1;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    m = max(m, temp);
    m1[temp]++;
    m2[temp]++;
  }
  vector<int> ans;
  for (auto x : m1) {
    ans.PB(x.first);
  }
  for (auto x : m2) {
    if(x.second > 1 && x.first != m) {
      ans.PB(x.first);
    }
  }
  cout << ans.size() << endl;
  for (auto x : ans) {
    cout << x << " ";
  }
  
  return 0;
}
