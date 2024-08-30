#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python

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
	cin>>n;
	vector<ll> a(n+1);
	vector<ll> pref(n+1);

	for (int i = 1; i <= n; i++){
		cin >> a[i];
		pref[i] = pref[i - 1] + a[i];
	}
	ll l = 1, r = n,ans = 0;
	while (l<=r){
		ll mid = (l + r) / 2;
		cout << "? " << (mid - l + 1) << " ";
		for (ll i = l; i <= mid; i++){
			cout << i << " ";
		}
		cout << endl;
		ll x = 0;
		cin >> x;
		if (x==pref[mid] - pref[l-1]){
			l = mid + 1;
		} else{
			r = mid - 1;
			ans = mid;
		}
	}

	cout << "! " << ans << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}