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


void solve(){
	// looknice;
	int n, m;
	cin >> n >> m;
	int x;
	cin >> x;

	int ans = (std::max(0, n - 2 * (x-1)) * std::max(0, m - 2 * (x-1)) + 1) / 2;
    ans -= (std::max(0, n - 2 * x) * std::max(0, m - 2 * x) + 1) / 2;
    std::cout << ans << "\n";
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	solve();
	 
}