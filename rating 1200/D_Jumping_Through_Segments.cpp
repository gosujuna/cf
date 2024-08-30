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
	vector<int> l(n), r(n);
	for (int i =0; i<n; i++){
		cin >> l[i] >> r[i];
	}

	int ans = *ranges::partition_point(ranges::iota_view(0,1E9),
	[&](int k){
		int ll = 0,rr=0;
		for (int i=0; i<n; i++){
			ll -=k;
			rr += k;
			ll = max(ll, l[i]);
			rr = min(rr, r[i]);
			if (ll >rr){
				return true;
			}
		}
		return false;
	});

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