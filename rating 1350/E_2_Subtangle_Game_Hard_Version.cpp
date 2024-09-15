#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

//#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int l, n, m;
	cin >> l >> n >> m;
	vector<int> a(l);
	for (int i =0; i<l; i++){
		cin >> a[i];
		a[i]--;
	}

	vector b(n, vector<int>(m));
	for (int i =0; i<n; i++){
		for (int j =0; j<m; j++){
			cin >> b[i][j];
			b[i][j]--;
		}
	}

	if (n > m){
		swap(n,m);
		vector c(n, vector<int>(m));
		for (int i =0; i<n; i++){
			for (int j =0; j<m; j++){
				c[i][j] = b[j][i];
			}
		}
		swap(b,c);
	}
	
	l = min(l,n);
	vector<vector<pair<int,int>>> vec(n*m);

	for (int i =0; i<n; i++){
		for (int j =0; j<m; j++){
			vec[b[i][j]].emplace_back(i,j);
		}
	}

	vector dp(l, vector<int>(n,0));
	
	for (int i = l-1; i>=0; i--){
		int u =0;
		for (int r = n-1; r>=0; r--){
			auto p = make_pair(r+1,0);
			auto it = lower_bound(vec[a[i]].begin(), vec[a[i]].end(), p);
			int v = r == n-1 ? 0LL : dp[i][r+1];
			if (it != vec[a[i]].begin()) {
				it--;
				auto [row, col] = *it;
				if (row == r && col + 1 >= u) {
					v = max(v, col + 1);
				}
			}
			u = (i < l -1 ? dp[i+1][r] : 0);
            dp[i][r] = v;
		}
	}
	if (dp[0][0] > 0){
		cout << "T" << endl;
	} else{
		cout << "N" << endl;
	}

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}