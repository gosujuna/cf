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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<vector<int>> adj(n);
	for (int i =1; i<n; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> siz(n);
	vector<int> add(n);
	int ans = 0;
	auto dfs1 = [&] (auto&& self, int x, int p) -> void {
		siz[x] = 1;
		for (auto y : adj[x]){
			if (y == p){
				continue;
			}
			self(self,y,x);
			siz[x] += siz[y];
			ans += siz[y] * (a[x] ^ a[y]);
			add[y] += (n - siz[y] *2) * (a[x] ^ a[y]);
		}
	};

	dfs1(dfs1,0,-1);

	auto dfs2 = [&] (auto&& self, int x, int p) -> void {
		for (auto y : adj[x]){
			if (y == p){
				continue;
			}
			add[y] += add[x];
			self(self,y,x);
		}
	};

	dfs2(dfs2,0,-1);

	for (int i =0; i<n; i++){
		cout << ans + add[i] << " ";
	}
	cout << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}