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
	bool ok = false;
	vector<int> cnt(n+1);
	for (int i =0; i<n; i++){
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i =1; i<=n; i++){
		if (cnt[i] % 2){
			ok = true;
			break;
		}
	}
	
	
	
	
	cout << ((ok) ? "YES" : "NO") << endl;
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}

