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
  //cout << "\n---\n";
  //for (int i = 1; i <= n; i++) {
    //for (int j = 1; j <= n; j++) {
      //cout << i << " " << j << " " << check[i][j] << "\n";
    //}
    //cout << endl;
  //}
  //cout << "---\n";
  
  auto comp = [&](vector<int> &p, vector<int>&q) {
    return p.size() < q.size();
  };
  sort(v, v + n + 1, comp);
  
  //for(int i = 0; i <= n; i++) {
    //cout << v[i].size() << " -- ";
    //for (auto x : v[i]) {
      //cout << x << " ";
    //}
    //cout << endl;
  //}
  
  int ans = -1;
  //int i = 0;
  //while (v[i].size() < 2) {
    //i++;
  //}
  
  //cout << "NEXT\n" << endl;
  for (int i = 0; i <= n; i++) { //  i is first friend
    for (auto x : v[i]) {       //  x is second friend
      for (auto y : v[x]) {     //  y is third firend
        if (check[i][y]) {
          ans = v[i].size() + v[x].size() + v[y].size() - 6;
          cout << i << " " << x << " " << y << "\n";
          cout << v[i].size() << " " << v[x].size() << " " << v[y].size() << endl << endl;
        }
        if (ans >= 0) {
          break;
        }
      }
      if (ans >= 0) {
        break;
      }
    }
  }
  cout << max(-1LL, ans);
  
  return 0;
}
