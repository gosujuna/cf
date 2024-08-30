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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int ans = 0;
	for (int i =0; i<n-1; i+=2){
		int diff = a[i] - a[i+1];
		if (k >= (a[i] - a[i+1])){
			a[i+1] += min(diff,k);
			k -= diff;
		} else if (k > 0){
			a[i+1] += k;
			k = 0;
		}
	}
	//debug(a);

	for (int i =0; i<n-1; i+=2){
		int diff = a[i] - a[i+1];
		ans += diff;
	}

	if (n % 2 == 1){
		ans += a[n-1];
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