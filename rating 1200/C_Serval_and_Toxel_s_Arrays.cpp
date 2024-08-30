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
	vector<int> a(n);
	vector<int> f(n+m);
	for (int i =0; i<n; i++){
		cin >> a[i];
		a[i]--;
		f[a[i]] += m+1;
	}
	debug(f);
	
	for (int i=0; i<m; i++){
		int p,v;
		cin >> p >> v;
		p--;
		v--;
		f[a[p]] -= m-i;
		a[p] = v;
		f[a[p]] += m-i;
		debug(f);
	}
	
	int ans = m* (m+1) * n;

	for (int i =0; i< n+m; i++){
		ans -= f[i] * (f[i]-1)/2;
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