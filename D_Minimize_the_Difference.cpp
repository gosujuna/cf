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
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    
    // first case
	int mx = 0;
	int mn = 1e18;
	int sum = 0;
	for (int i =1; i<=n; i++){
		sum += a[i-1];
		mn = min(mn, sum/ i);
	}

	sum = 0;
	reverse(all(a));
	for (int i=1; i<=n; i++){
		sum += a[i-1];
		mx = max(mx, (sum + i -1) / i);
	}
	cout << mx - mn << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}