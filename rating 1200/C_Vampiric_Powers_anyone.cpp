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

	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	vector<int> c(n+1);

	for (int i =0; i<n; i++){
		c[i+1] = c[i] ^ a[i];
	}

	sort(all(c));

	c.erase(unique(all(c)), c.end());

	int ans = 0;
	for (int i =0; i<sz(c); i++){
		for (int j = 0; j<i; j++){
			ans = max(ans, c[i] ^ c[j]);
		}
	}
	int ans = 0;
	
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