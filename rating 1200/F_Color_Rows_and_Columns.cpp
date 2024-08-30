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
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	// looknice;
	int n,k;
	cin >> n >> k;
	int inf = 1e10;
	vector<int> dp(k+1,inf);
	dp[0] = 0;
	while (n--){
		int a,b;
		cin >> a >> b;
		vector<int> me(k+1,inf);
		me[0] = 0;
		int cnt=0;
		int cost=0;
		while (cnt < k  && (a > 0 || b>0)){
			if (a<b){
				swap(a,b);
			}
			cnt += 1;
			cost += b;
			a -=1;
			me[cnt] = cost;
		}
		for (int i = k-1; i>=0; i--){
			for (int j = 1; j<= k-i; j++){
				dp[i+j] = min(dp[i+j], dp[i] + me[j]);
			}
		}
	}
	cout << (dp[k] == inf ? -1 : dp[k]) << endl;
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}