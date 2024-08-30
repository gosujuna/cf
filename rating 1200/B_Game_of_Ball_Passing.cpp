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
	int n;
	cin >> n;
	ll sum = 0;
	vector<ll> a(n);
	ll mx = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
		mx = max(mx, a[i]);
	}

	if (sum==0){
		cout << 0 << endl;
		return;
	}

	if (2*mx <= sum){
		cout << 1 << endl;
		return;
	} else{
	cout << 2 * mx - sum << endl;
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