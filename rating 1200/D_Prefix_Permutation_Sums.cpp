#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	// looknice;
	int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 1; i < n; i++) {
      cin >> a[i];
    }
    vector<long long> extra;
    vector<int> used(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
      long long num = a[i + 1] - a[i];
      if (1 <= num && num <= n && !used[num]) {
        used[num] = 1;
      } else {
        extra.push_back(num);
      }
    }
    if (extra.empty()) {
      cout << "YES" << '\n';
	  return;
	}
    if (extra.size() > 1) {
      cout << "NO" << '\n';
	  return;
	}
    vector<int> left;
    for (int i = 1; i <= n; i++) {
      if (!used[i]) {
        left.push_back(i);
      }
    }
    if (left.size() == 2 && extra[0] == left[0] + left[1]) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}