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


void solve(){
	// looknice;
	int n,q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> sum(n+1);
	vector<int> xsum(n+1); 
	map<int, vector<int>> f[2];
	for (int i =0; i<n; i++){
		xsum[i+1] = xsum[i] ^ a[i];
		sum [i+1] = sum[i] + a[i];
	}
	for (int i = 0; i<=n; i++){
		f[i%2][xsum[i]].push_back(i);
	}

	

	auto query = [&](int l, int r){

		if (sum[l] == sum[r]){
			return 0;
		}
		if (xsum[l] != xsum[r]){
			return -1;
		}
		if ((r-l) % 2){
			return 1;
		}
		if (a[l] == 0 || a[r-1] == 0){
			return 1;
		}
		auto &b = f[!(l % 2)][xsum[l]];
		auto it = lower_bound(all(b), l);
		if (it != b.end() && *it <r){
			return 2;
		
		}
		return -1;
	};

	while (q--){
		int l,r;
		cin >> l >> r;
		l--;
		cout << query(l,r) << endl;
		
		
	}
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
		solve();
	 
}