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

using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
using ll = long long;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)


void solve(){
	int n;
	cin >> n;
	vector<vector<int>> adj(n);

	for (int i = 0; i < n - 1; i++){
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> f(n);
	vector<int> dep(n), mx(n);
	auto dfs = [&](auto&& self, int x, int p) -> void {
		mx[x] = dep[x];
		for (auto y : adj[x]){
			if (y == p){
				continue;
			}
			dep[y] = dep[x] + 1;
			self(self , y , x);
			mx[x] = max(mx[x], mx[y]);
		}
		f[0]++;
		f[dep[x]]--;
		if (mx[x] + 1 < n){
			f[mx[x] + 1]++;
		}
	};

	dfs(dfs,0,-1);

	for (int i = 0; i < n - 1; i++){
		f[i + 1] += f[i];
	}

	cout << *min_element(all(f)) << endl;
	
}

signed main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int T;
     cin >> T;
     while (T--){
        solve();
     }
}