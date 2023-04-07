#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<vector<int>> g(n);       //graph of tree
    for (int i = 0; i < n - 1; i++) { //store tree
      int x, y;
      cin >> x >> y;
      --x; --y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    vector<int> que(1, 0);
    vector<int> pv(n, -1);
    pv[0] = -2;
    for (int b = 0; b < (int) que.size(); b++) {
      for (int u : g[que[b]]) {
        if (pv[u] == -1) {
          que.push_back(u);
          pv[u] = que[b];
        }
      }
    }
    int k;
    cin >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) {
      cin >> a[i];
      --a[i];
    }
    int low = 0, high = n;
    while (low < high) {
      int mid = (low + high + 1) >> 1;
      vector<int> val(n, -1);
      for (int i = 0; i < k; i++) {
        val[a[i]] = mid / k + (i < mid % k);
      }
      bool ok = true;
      vector<int> down(n, 0);
      for (int it = n - 1; it >= 0; it--) {
        int i = que[it];
        if (val[i] >= 0) {
          if (down[i] < val[i]) {
            if (pv[i] < 0) {
              ok = false;
              break;
            }
            if (val[pv[i]] >= 0) {
              ok = false;
              break;
            }
            val[pv[i]] = val[i] - 1;
          }
        } else {
          if (pv[i] >= 0) {
            down[pv[i]] = max(down[pv[i]], down[i] + 1);
          }
        }
      }
      if (ok) {
        low = mid;
      } else {
        high = mid - 1;
      }
    }
    cout << low << '\n';
  }
  return 0;
}