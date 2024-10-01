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
	vector<int> a(n + 1);

	for (int i =1; i<=n; i++){
		cin >> a[i];
	}

	int l =1, r = n, time = n;

	while (l <= r){
		if (a[l] < a[r]){
			if (time > a[r]){
				cout << 0 << endl;
				return;
			}
			r--;
		}
		else{
			if (time > a[l]){
				cout << 0 << endl;
				return;
			}
			l++;
		}
		time--;
	}

	int mn = 1, mx = n;

	for (int i = 1; i<=n; i++){
		mn = max(mn,  i - a[i] + 1);
		mx = min(mx, i + a[i] - 1);
	}

	if (mn <= mx){
		cout << (mx - mn + 1) << endl;
	} else{
		cout << 0 << endl;
	}



}
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}