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


void solve() {
    int n, k;
	cin >> n >> k;
	vector<int> a(n), b(n);

	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	for (int i = 0; i<n; i++){
		cin >> b[i];
	}

	auto get = [&](int v){
		int sum = 0;
		int cnt = 0;
		for (int i =0; i<n; i++){
			if (a[i] >= v){
				int t = (a[i] - v) / b[i] + 1;
				cnt += t;
				sum += a[i] * t - t *(t-1) / 2 * b[i];
			}
		}
		return pair{cnt,sum};
	};

	int lo = 0, hi = 1e9+1;
	while (lo < hi){
		int x = (lo + hi) / 2;
		if (get(x).first <= k){
			hi = x;
		} else{
			lo = x+1;
		}
	}
	auto [cnt,sum] = get(lo);
	
	if (lo > 0){
		sum += (k - cnt) * (lo - 1);
	}
	cout << sum << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}