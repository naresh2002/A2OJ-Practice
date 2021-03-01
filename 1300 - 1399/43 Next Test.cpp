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
  int a[3005] = {0};
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    a[temp] = 1;
  }
  for (int i = 1; i < 3005; i++) {
    if (a[i] == 0) {
      temp = i;
      break;
    }
  }
  cout << temp;
  
  return 0;
}
