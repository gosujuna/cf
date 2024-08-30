#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
	int n,k;
	cin >> n >> k;
	int d[2*n];
        int mx = -1;
        fill(d, d + 2*k, 0);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            assert(x >= 1);
            d[x % (2*k)]++;
            mx = max(mx, x);
        }
 
        int cnt = 0;
        int ans = INT_MAX;
        for (int i = 0; i <= k - 2; i++) {
            cnt += d[i];
        }
 
        for (int l = 0, r = k-1; l < 2*k; l++, r++) {
            if (r >= 2*k) r -= 2*k;
 
            if (cnt += d[r]; cnt == n) {
                int wait = (r-mx) % (2*k);
                if (wait < 0) wait += 2*k;
                ans = min(ans, mx + wait);
            }
 
            cnt -= d[l];
        }
 
        if (ans == INT_MAX) {
            ans = -1;
        }
        cout << ans << '\n';

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}