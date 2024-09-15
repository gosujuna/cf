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
	int ans =0;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	int l =0;
	while (l < n){
		int r = l+1;
		bool two = (a[l] == 2);
		bool midzero = false;
		while (r < n){
			if (r - 1 > l && a[r-1] == 0){
				midzero = true;
			}
			if (a[r] == 2){
				two = true;
			}
			bool good = (!midzero && (two || a[l] != 0 || a[r] != 0));
			if (!good) break;
			r++;
		}
		l = r;
		
		ans++;
	}
	debug(ans);
	cout << ans << endl;

	


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}