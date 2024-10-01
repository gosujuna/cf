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

vector<u64> V(1e6+1);



void solve(){
	int n,q;
	cin >> n >> q;
	vector<u64> pref(n+1);
	for (int i =0; i<n; i++){
		int a;
		cin >> a;
		pref[i+1] = pref[i] ^ V[a];
	}

	while (q--){
		int l, r;
		cin >> l >> r;
		l--;
		if (pref[r] - pref[l] == 0){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 for (int i =1; i<=1e6; i++){
		V[i] = rng();
	 }
	 
	 while (T--){
		solve();
	 }
}