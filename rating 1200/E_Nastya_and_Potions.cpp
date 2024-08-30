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
	int n, k;
	cin >> n >> k;
	vector<int> cost(n);
	for (int i =0; i<n; i++){
		cin >> cost[i]; 
	}

	vector<bool> have(n);
	for (int i=0; i<k; i++){
		int x;
		cin >> x;
		x--;
		have[x] = true;
	}
	vector<bool> vis(n);
	vector<vector<int>> ing(n);

	for (int i =0; i<n; i++){
		int m;
		cin >> m;
		while (m--){
			int x;
			cin >> x;
			x--;
			ing[i].push_back(x);
		}

	}

	auto dfs = [&] (auto self, int x) -> int {
		if (vis[x]){
			return cost[x];
		}
		if (have[x]) {
			cost[x] = 0;
		}
		if (!ing[x].empty()){
			int res = 0;
			for (auto y : ing[x]){
				res += self(self,y);
			}
			cost[x] = min(cost[x],res);
		}
		vis[x] = true;
		return cost[x];
	};

	for (int i =0; i<n; i++){
		cout << dfs(dfs,i) << " \n"[i==n-1];
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