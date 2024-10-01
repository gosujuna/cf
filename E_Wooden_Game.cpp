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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		for (int j = 1; j<a[i]; j++){
			int x;
			cin >> x;
		}
	}

	vector vec(20, vector<int>(0));

	for (int i =0; i<n; i++){
		vec[__lg(a[i])].push_back(a[i]);
	}
	int ans = 0;
	for (int i = 19; i>=0; i--){
		if (vec[i].size() >= 2){
			ans |= (2 << i) - 1;
			break;
		}
		if (vec[i].size() == 1){
			if (ans >> 1 & i){
				ans |= (1 << i) - 1;
				break;
			}
			ans |= 1 << i;
			int x = vec[i][0] ^ (1 << i);
			if (x > 0){
				vec[__lg(x)].push_back(x);
			}
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