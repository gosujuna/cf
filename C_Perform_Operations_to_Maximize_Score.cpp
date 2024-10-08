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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    int x = -1;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1 && (x == -1 || a[i] > a[x])) {
            x = i;
        }
    }
    
    i64 ans = 0;
    if (x != -1) {
        auto aa = a;
        i64 res = aa[x] + k;
        aa[x] = 0;
        std::sort(aa.begin(), aa.end());
        
        res += aa[n / 2];
        ans = std::max(ans, res);
    }
    x = std::max_element(a.begin(), a.end()) - a.begin();
    i64 lo = 0, hi = 2E9;
    std::vector<i64> v;
    v.reserve(n);
    const int need = (n + 1) / 2;
    while (lo < hi) {
        i64 m = (lo + hi + 1) / 2;
        v.clear();
        for (int i = 0; i < n; i++) {
            if (i == x) {
                continue;
            }
            if (a[i] >= m) {
                v.push_back(0);
                continue;
            }
            if (b[i] == 0) {
                continue;
            }
            v.push_back(m - a[i]);
        }
        i64 sum = k + 1;
        if (v.size() >= need) {
            std::nth_element(v.begin(), v.begin() + need, v.end());
            sum = std::accumulate(v.begin(), v.begin() + need, 0LL);
        }
        if (sum <= k) {
            lo = m;
        } else {
            hi = m - 1;
        }
    }
    ans = std::max(ans, a[x] + lo);
    std::cout << ans << "\n";
}
// 2 5 11 15 
// 15 + 6
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}