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

	int n,m;
	cin >> n >> m;
	if (n * m == 1){
		int x;
		cin >> x;
		cout << -1 << endl;
		return;
	}

	
	for (int i = 0; i< n * m; i++){
		int x;
		cin >> x;
		
		if (x == n * m){
			cout << 1 << " ";
		} else{
			cout << (x + 1) << " ";
		}
	}
	cout << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}