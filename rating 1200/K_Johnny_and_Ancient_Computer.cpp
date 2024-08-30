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

ll getr(ll a){
	while (a %2 == 0)
	a/= 2;
	return a;
}
void solve(){
	// looknice;
	ll a, b;
	cin >> a >> b;
	if (a>b){
		swap(a,b);
	}
	ll r = getr(a);

	if (getr(b) != r){
		cout << -1 << endl;
		return;
	}

	ll ans = 0;

	b/= a;
	while (b >=8){
		b /= 8, ans++;
	}

	if (b>1){
		ans++;
	}

	cout << ans << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}