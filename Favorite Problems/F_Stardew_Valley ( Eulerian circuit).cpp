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
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n,m;
	cin >> n >> m;
	vector<vector<int>> adj(n);
	vector<int> u(m), v(m), c(m);
	vector<int> deg(n);

	for (int i = 0; i < m; i++){
		cin >> u[i] >> v[i] >> c[i];
		u[i]--;
		v[i]--;
		deg[u[i]] ^= c[i];
		deg[v[i]] ^= c[i];
		adj[u[i]].push_back(i);
		adj[v[i]].push_back(i);
	}

	vector<bool> vis(n);

	auto dfs = [&](auto self, int x) -> void {
		vis[x] = true;
		for (auto i : adj[x]){
			int y = u[i] ^ v[i] ^ x;
			if (vis[y] || c[i] == 1){
				continue;
			}
			self(self,y);
			if (deg[y] == 1){
				deg[x] ^= 1;
				deg[y] ^= 1;
				c[i] = 1;
			}
		}
	};
	for (int x = 0; x < n; x++){
		if (vis[x]){
			continue;
		}
		dfs(dfs,x);
		if (deg[x] == 1){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	vector<int> ans;
	auto find = [&] (auto&& self, int x) -> void {
		while (!adj[x].empty()){
			int i = adj[x].back();
			adj[x].pop_back();
			int y = u[i] ^ v[i] ^ x;
			if (c[i] == 0){
				continue;
			}
			c[i] = 0;
			self(self,y);
		}
		ans.push_back(x);
	};

	find(find,0);

	cout << ans.size() - 1 << endl;
	for (int i =0; i<ans.size(); i++){
		cout << ans[i] + 1 << " \n"[i == sz(ans) - 1];
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