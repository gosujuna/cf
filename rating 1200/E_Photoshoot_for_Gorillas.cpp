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
	int n,m,k;
	cin >> n >> m >> k;
	int w;
	cin >> w;
	vector<int> a(w);
	for (int i =0; i<w; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	// find how many subq gets into for each grid
	// sort array and subq count and match them
	// sum all the multiples and return the answer
	vector<int> cnt;

	for (int i =0; i<n; i++){
		for (int j=0; j<m; j++){
			int z = 0;
			int i1 = max(0LL, i - k + 1);
			int j1 = max(0LL, j - k + 1);
			int i2 = min(i, n - k);
			int j2 = min(j, m - k);
			cnt.push_back((i2 - i1 + 1) * (j2 - j1 + 1));
			}
	}
	int ans = 0;
	sort(cnt.rbegin(), cnt.rend());

	for (int i = 0; i<w; i++){
		ans += a[i] * cnt[i];
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