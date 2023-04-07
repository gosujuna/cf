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
	ll n, h;
	cin >> n >> h;
	vector<ll> a(n);

	for (auto& i:a){
		cin >> i;
	}
	ll l = 1, r = 1e18;

	while (l<= r){
		ll m = (l + r) / 2;
		ll sum = m;
		for (int i = 0; i < n - 1; i++){
			sum += min(m, a[i + 1] - a[i]);
		}
		if (sum <h) {
			l = m + 1;
		} else{
			r = m - 1;
		}
	}
	cout << l << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}