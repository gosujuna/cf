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

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    std::vector ans(p.rbegin(), p.rend());
    int x = std::find(p.begin(), p.end(), n) - p.begin();
    if (x == 0 && n > 1) {
        x = std::find(p.begin(), p.end(), n - 1) - p.begin();
    }
    for (int i = 0; i < n; i++) {
        auto q = p;
        std::reverse(q.begin() + i, q.end());
        std::rotate(q.begin(), q.begin() + i, q.end());
        ans = std::max(ans, q);
    }
    for (int i = 0; i < x; i++) {
        auto q = p;
        std::reverse(q.begin() + i, q.begin() + x);
        std::rotate(q.begin(), q.begin() + i, q.end());
        std::rotate(q.begin(), q.begin() + x - i, q.end() - i);
        ans = std::max(ans, q);
    }
    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
    }
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}