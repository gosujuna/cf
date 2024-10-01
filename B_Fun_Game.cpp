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
	string s,t;
	cin >> n;
	cin >> s >> t;
	bool ok = true;
	for (int i = 0; i < n; i++){
		if (s[i] == '1'){
			break;
		}
		if (t[i] == '1'){
			ok = false;
			break;
		}
	}

	cout << (ok ? "YES" : "NO") << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}