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
	vector<int> dp(4, -1e9);
	dp[0] = 0;
	for (int i =0; i<n; i++){
		dp[1] -= 1;
		dp[2] -= 1;
		for (int j = 3; j; j--){
			dp[j] = max(dp[j], dp[j-1] + a[i]);
		}
		
	}
	cout << dp[3] << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}