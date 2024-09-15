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
	int n,q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> b(n,0);
	for (int i =2; i<n;i++){
		if (a[i-1] >= a[i] && a[i-2] >= a[i-1] && a[i-2] >= a[i]){
			b[i] = 1;
		}
		
	}
	std::vector<int> bad_pref(n-1);
	for (int i = 1; i+1 < n; i++) {
		bad_pref[i] = bad_pref[i-1] + (a[i-1] >= a[i] && a[i] >= a[i+1]);
	}
	
	
	vector<int> pref(n+1,0);
	for (int i=1; i<=n; i++){
		pref[i] = pref[i-1] + b[i-1];
	}
	

	for (int i =0; i<q; i++){
		int l,r;
		cin >> l >> r;
		l--;
		
		
		
		cout << (r - l) - (r -l >= 2 ? pref[r] - pref[l+1] : 0) << endl;


	}


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}