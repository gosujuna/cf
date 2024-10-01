#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string;
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
const int N = 86400;
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> t(n), d(n);
	for (int i =0; i<n; i++){
		cin >> t[i] >> d[i];
	}
	int ans = n ? t[0] - 1 : N;
	vector<int> dp(k+1);
	for (int i =0; i<n; i++){
		for (int j = k; j>=0; j--){
			if (j < k){
				dp[j+1] = min(dp[j+1],dp[j]);
			}
			dp[j] = max(dp[j]+1, t[i]) + d[i] - 1;
		}
		debug(dp);
		ans = max(ans, (i < n-1 ? t[i+1]-1 : N) - dp[k]);
	}
	

	cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}