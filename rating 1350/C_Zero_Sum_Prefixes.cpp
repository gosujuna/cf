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
	int s= 0, ans =0, mx = 0, first = 1;
	map<int,int> cnt;

	for (int i =0; i<n; i++){
		if (a[i] == 0){
			if (first){
				first = 0;
				ans += cnt[0];
			} else{
				ans += mx;
			}
			mx = 0;
			cnt.clear();

		}
		debug(ans);
		s += a[i];
		mx = max(mx,++cnt[s]);
	}

	if (first){
				first = 0;
				ans += cnt[0];
			} else{
				ans += mx;
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