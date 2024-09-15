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

int mex(vector<int> &a) {
    vector<bool> f(a.size() + 1, 0);
    for (int i : a) if (i <= (int) a.size()) f[i] = 1;
    int mex = 0;
    while (f[mex]) ++mex;
    return mex;
}

void solve(){
	// looknice;
	int n , m; 
	cin >> n >> m;
	
	vector<int> mxarray;
	int mxused;
	vector<int> A(n), B(n);
	int maxa = 0; 
	int maxb = 0;
	for (int i =0; i<n; i++){
		int len;
		cin >> len;
		vector<int> arr(len);
		for (int j=0; j<len; j++){
			cin >> arr[j];
		}
		int mx = mex(arr);
		maxa = max(mx,maxa);
		arr.push_back(mx);
		int secondmx = mex(arr);
		maxb = max(secondmx, maxb);
		
		A[i] = mx;
		B[i] = secondmx;
	}

	vector<int> cnt(maxb +1 );
	for (int i =0; i<n; i++){
		cnt[A[i]]++;
	}

	vector<vector<int>> adj(maxb + 1);
	for (int i =0; i<n; i++){
		adj[A[i]].push_back(B[i]);
	}

	vector<int> dp(maxb + 1);
	for (int x = maxb; x>=0; x--){
		dp[x] = x;
		for (auto y : adj[x]){
			dp[x] = max(dp[x], dp[y]);
		}
		if (cnt[x] > 1){
			maxa = max(maxa,dp[x]);
		}
	}
	
	
	int ans = 0;
	for (int x = 0; x<=maxb && x<= m; x++){
		ans += max(dp[x], maxa);
	}
	if (maxb < m){
		ans += (maxb+ m + 1) * (m - maxb) / 2;
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