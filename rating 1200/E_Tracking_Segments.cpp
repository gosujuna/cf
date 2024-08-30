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
	int n,m;
	cin >> n >> m;
	vector<int> b(n,0);

	vector<int> l(m), r(m);
	for (int i =0 ; i<m; i++){
		cin >> l[i] >> r[i];
		l[i]--;
	}
	int q;
	cin >> q;
	vector<int> changes(q);

	for (int i =0; i<q; i++){
		cin >> changes[i];
		changes[i]--;
	}
	

	int lo = 0, hi = q+1;
	while (lo < hi){
		int t = (lo + hi)/ 2;
		vector<int> s(n+1);
		for (int i =0; i<t; i++){
			s[changes[i]+1] = 1;
		}

		for (int i = 1; i<=n; i++){
			s[i] += s[i-1];
		}

		bool ok = false;

		for (int i =0; i<m; i++){
			if (s[r[i]] - s[l[i]] > (r[i] - l[i]) / 2){
				ok = true;
			}
		}

		if (ok){
			hi = t;
		} else{
			lo = t+1;
		}

	}
	int ans = lo;
	if (ans >q){
		ans = -1;
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