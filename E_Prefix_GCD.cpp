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

	int GCD = 0;
	for (int i =0; i<n; i++){
		GCD = gcd(GCD, a[i]);
	}
	int ans = 0; 
	int cnt = n-1;
	int cgcd = *min_element(all(a));
	ans += cgcd;
	while (cgcd > GCD){
		int mngcd = cgcd;
		for (auto i : a){
			mngcd = min(mngcd, gcd(cgcd,i));
		}
		cnt--;
		cgcd = mngcd;
		ans += cgcd;
	}
	cout << ans + cnt*GCD << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}