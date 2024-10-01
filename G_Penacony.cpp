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
void solve(){
	// looknice;
	int n,m;
	cin >> n >> m;
	vector<u64> f(n);
	for (int i =0; i<m; i++){
		u64 x = rng();
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		f[a] ^= x;
		f[b] ^= x;
	}
	for (int i =1; i<n; i++){
		f[i] ^= f[i-1];
	}
	debug(f);
	map<u64,int> cnt;
	int ans = 0;
	for (int i =0; i<n; i++){
		ans = max(ans,++cnt[f[i]]);
	}
	cout << n - ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}