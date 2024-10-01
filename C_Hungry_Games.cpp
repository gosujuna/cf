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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<int> s(n+1);
	for (int i =0; i<n; i++){
		s[i+1] = s[i] + a[i];
	}

	int ans = n * (n + 1) / 2;
	vector<int> dp(n + 1);
	dp[n] = 1;
	for (int i = n-1, j= n+1; i>=0; i--){
		while (s[j-1] - s[i] > x){
			j--;
		}
		dp[i] = 1 + (j <= n ? dp[j] : 0);
		ans -= dp[i] - 1;
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