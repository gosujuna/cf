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

vector<int> val{1,10,100,1000,10000};
void solve(){
	// looknice;
	string s;
	cin >> s;
	
	int n = sz(s);
	vector dp(n+1, vector<int>(5));
	for (int i =0; i<n; i++){
		int x = s[i] - 'A';
		for (int j =0; j<5; j++){
			dp[i+1][j] = dp[i][max(x,j)] + (x < j ? -1 : 1) * val[x];
		}
	}
	int ans  = -1e9;
	int mx = 0;
	int res = 0;
	for (int i = n-1; i>=0; i--){
		for (int j =0; j<5; j++){
			ans = max(ans, res + (j < mx ? -1 : 1) * val[j] + dp[i][max(mx,j)]);
		}
		int x = s[i] - 'A';
		if (x < mx){
			res -= val[x];
		} else{
			res += val[x];
			mx = x;
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