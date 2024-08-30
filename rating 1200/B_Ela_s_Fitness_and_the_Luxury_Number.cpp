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
ll count(ll n) { ll ret = 0;
	for (int i = 0; i <= 2; i++){
		ll low = 0;
		ll high = 2e9 * 1LL;
		while (low <high){
			ll mid = (low + high + 1) >> 1;
			if (mid * (mid + i) > n){
				high = mid - 1;
			} else{
				low = mid;
			}
		}
		ret += low;
	}
	return ret;
}

void solve(){
	// looknice;
	ll l, r;
	cin >> l >> r;

	cout << count(r) - count(l - 1) << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}