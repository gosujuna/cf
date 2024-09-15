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
	int n,q;
	cin >> n >> q;

	for (int i =1; i<n; i++){
		cout << i << " " << i + 1 << endl;
	}
	
	int u = n;
	int v1 = n-1;
	for (int i =0; i<q; i++){
		int d;
		cin >> d;
		if (d == v1){
			cout << -1 << " " << -1 << " " << -1 << "\n";
		} else{
			int v2 = d;
			cout << u << " " << v1 << " " << v2 << "\n";
			v1 = v2;
		}
	}
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}