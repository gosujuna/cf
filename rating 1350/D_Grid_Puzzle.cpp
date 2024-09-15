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
	int ans  = 0;
	
	for (int i =0; i<n; i++){
		cin >> a[i];
		
	}

	bool x=0,y=0;
	

	
	for (int i =0; i<n; i++){
		if (!x && !y){
			if (a[i] == 0){
				continue;
			}
			ans++;
			if (a[i] <= 2){
				x = true;
			}
		} else if (x){
			x = false;
			if (a[i] <= 2){
				continue;
			}
			ans++;
			if (a[i] <= 4){
				y = true;
			}
		} else{
			y = false;
			if (a[i] == 0){
				continue;
			}
			ans++;
			if (a[i] <= 4){
				x = true;
			}
		}
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