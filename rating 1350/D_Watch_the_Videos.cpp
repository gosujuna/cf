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
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	int ans = accumulate(all(a),0LL);
	int l = 0;
	int r = n-1;
	
	int temp = 0;
	while (l <= r){
		bool left = true;
		ans++;
		if (l == r){
			break;
		}
		int cur = 0;
		while (m >= temp && l<=r){
			if (left){
				left = false;
				if (m >= a[r] + cur){
					cur = a[r];
					r--;
				} else{
					break;
				}
			} else{
				left = true;

				if (m >= cur + a[l]){
					cur = a[l];
					l++;
				} else{
					

					break;
				}
			}
		}
	}
	cout << ans << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	 
		solve();
	 
}