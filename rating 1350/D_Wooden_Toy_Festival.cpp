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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));

	int lo = 0, hi = 1e9;
	while (lo < hi){
		int x = (lo + hi) / 2;
		int i =0;
		for (int t = 0; t<3 && i < n; t++){
			i = upper_bound(all(a), 2LL * x + a[i]) - a.begin();
		}
		if (i == n){
			hi = x;
		} else{
			lo = x+1;
		}
	}
	cout << lo << endl;
	
	


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}