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
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
 
	vector<int> pref(n), suf(n);

	for (int i =0; i<n; i++){
		pref[i] = a[i] + (n - i -1);
		suf[i] = a[i] + i;
	}
	for (int i =1; i<n; i++){
		pref[i] = max(pref[i], pref[i-1]);
	}
	for (int i = n-2; i>=0; i--){
		suf[i] = max(suf[i], suf[i+1]);
	}

	int ans = 2e9;
	debug(pref);
	debug(suf);

	for (int i =0; i<n; i++){
		int cur = a[i];
		if (i > 0){
			cur = max(cur, pref[i-1]);
		}
		if (i < n-1){
			cur = max(cur, suf[i+1]);
		}
		ans = min(ans,cur);
	}
	cout << ans << endl;

	
	
 
	
	// if left of i , each is hit with  power - (n-i)
	// if right of i, each is hit with power - (i+1)
 
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}