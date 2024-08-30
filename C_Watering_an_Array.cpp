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
	int n, k ,d;
	cin >> n >> k >> d;
	vector<int> a(n);
	vector<int> v(k);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	for (int i =0; i<k; i++){
		cin >> v[i];
	}

	int ans = 0;
	for (int i =0; i<d && i< 2*n+1; i++){
		int res =0;
		for (int j=0; j<n; j++){
			res += (a[j] == j+1);
		}
		ans = max(ans,res+(d-1-i) / 2);
		int b = v[i % k];
		for (int j =0; j<b; j++){
			a[j] += 1;
		}
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