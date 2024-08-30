#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
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
	ll n;
	cin >> n;
	ll l = 0, r = min<ll>(2e9, 2 * n);
	
	while (r - l >1){
		ll m = (l + r) >> 1;
		if (m * (m-1) / 2 + m < n){
			l = m;
		} else{
			r = m;
		}
	}
	ll y = n - r * (r - 1) / 2;
	if ((r+1) * r /2 <= n){
		cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << endl;

	} else{
		cout << r + y << endl;
	}
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}