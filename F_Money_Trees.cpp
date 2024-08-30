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

	vector<int> s(n+1);
	vector<int> h(n);
	for (int i =0; i<n; i++){
		int a;
		cin >> a;
		s[i+1] = s[i] + a;
	}
	for (int i =0; i<n; i++){
		cin >> h[i];
	}
	
	int ans = 0;
	
	for (int i =0, j=0; i<n; i++){
		if (i && h[i-1] % h[i] != 0){
			j = i;
		}

		while (s[i+1] - s[j] > k){
			j++;
		}
		ans = max(ans, i-j+1);
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