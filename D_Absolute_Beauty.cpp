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

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	for (int i =0; i<n; i++){
		cin >> b[i];
	}
	int ans = 0;
	int mx1 = -1e18, mx2 = -1e18;
	for (int i =0; i<n; i++){
		int d =  abs(a[i] -b[i]);
		ans += d;
		mx1 = max(mx1, a[i] + b[i] - d);
		mx2 = max(mx2, -a[i] - b[i] -d);
	}
	
	debug(mx1, mx2);
	ans += max(0LL, mx1 + mx2);
	

	
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