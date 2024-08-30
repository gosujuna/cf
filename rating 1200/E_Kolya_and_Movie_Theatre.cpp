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
	int n, m , d;
	cin >> n >> m >> d;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	// greedily pick array by order of penalty..
	int ans = 0;
	int sum = 0;
	priority_queue<int,vector<int>, greater<>> h;

	for (int i =0; i<n; i++){
		if (a[i] > 0){
			h.push(a[i]);
			sum += a[i];
		}
		if (h.size() > m){
			sum -= h.top();
			h.pop();
		}
		ans = max(ans,sum - (i+1)*d);
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