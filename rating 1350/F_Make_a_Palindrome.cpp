#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
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
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    vector<int> p(n + 1);
    for (int i = 0; i < n; ++i) p[i + 1] = p[i] + a[i];
    map<int, int> cnt;
    long long ans = 0;
    for (int len = 0; len <= n; ++len) {
      for (int i = 0; i <= n - len; ++i) {
        int s = p[i] + p[i + len];
        ans += len;
        ans -= 2 * cnt[s];
        ans -= (s % 2 == 1 || !binary_search(p.begin(), p.end(), s / 2));
        cnt[s] += 1;
      }
	}
	cout << ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}