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
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	vector<pair<int,int>> d;
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	for (int i =0; i<n; i++){
		cin >> b[i];
		d.emplace_back(a[i] +b[i] -1,i);
	}
	sort(all(d));
	
	int l =0;
	int r = n-1;
	int ans = 0;
	bool alice = true;
	while (r>=0){
		if (alice){
			ans += (a[d[r].second] -1);
			r--;
			alice = false;
		} else{
			alice = true;
			ans -= (b[d[r].second]-1);
			r--;

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