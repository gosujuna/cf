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
	int n,m,q;
	cin >> n >> m >> q;
	vector<int> a;
	
	for (int i =0; i<m; i++){
		int x;
		cin >> x;
		x--;
		a.push_back(x);
	}
	debug(a);
	sort(all(a));
	
	while (q--){
		int z;
		cin >> z;
		z--;
		int before = upper_bound(all(a), z) - 1 - a.begin();
		int after = upper_bound(all(a),z) - a.begin();
		
		
		if (after == 0){
			cout << a[after] << endl;
		} else if (before == m-1){
			
			cout << (n-1 - a[before]) << endl;
		} else{
			cout << (a[after] - a[before]) / 2 << endl;
		}
		
		


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