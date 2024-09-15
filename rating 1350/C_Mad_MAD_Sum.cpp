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
	int ans = 0;
	for (int t = 0; t<2; t++){
		vector<int> vis(n+1);
		int mx = 0;
		for (auto &x : a){
			ans += x;
			if (vis[x]){
				mx = max(mx,x);
			}
			vis[x] = 1;
			x = mx;
		}
	}

	for (int i =0; i<n; i++){
		ans += (n-i) * a[i];
	}
	cout << ans << endl;
	




	
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}