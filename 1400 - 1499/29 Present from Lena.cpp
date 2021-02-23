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
  for (int i = 1; i <= n + 1; i++) {
    int k = 0;
    for (int j = 1; j <= 2 * n + 1; j++) {
      if (j <= n + i && j >= n + 2 - i){
        if (k == 0 && j >= n + 1) {
          cout << k;
        }
        else {
          cout << k << " ";
        }
        if (j <= n) {
          k++;
        }
        else {
          k--;
        }
      }
      else if (k >= 0) {
        cout << "  ";
      }
      
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    int k = 0;
    for (int j = 1; j <= 2 * n + 1; j++) {
      if (j <= n + i && j >= n + 2 - i){
        if (k == 0 && j >= n + 1) {
          cout << k;
        }
        else {
          cout << k << " ";
        }
        if (j <= n) {
          k++;
        }
        else {
          k--;
        }
      }
      else if (k >= 0){
        cout << "  ";
      }
    }
    cout << endl;
  }
  
  return 0;
}
