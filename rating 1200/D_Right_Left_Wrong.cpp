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
	string s;
	cin >> s;
	vector<int> dp(n);
	vector<int> pref(n+1);
	pref[0] = 0;
	int ans = 0;
	

	for (int i =1; i<=n; i++){
		pref[i] = pref[i-1] + a[i-1];

	}
	debug(pref);
	int l = 0, r=n-1;
	while (l < r){
		if (s[l] == 'L' && s[r] == 'R'){
			ans += (pref[r+1] - pref[l]);
			l++;
			r--;
		}
		if (s[l] != 'L'){
			l++;
		}
		if (s[r] != 'R'){
			r--;
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