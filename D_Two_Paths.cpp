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
	
	vector adj(n,vector<int>());

	for (int i =1; i<n; i++){
		int u ,v;
		cin >> u >> v;
		u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> d(n), dia(n);

	auto dfs = [&] (auto&& self, int x, int p) -> void {
		d[x] = dia[x] = 0;
		for (auto y : adj[x]){
			if (y != p){
				self(self,y,x);
				dia[x] = max({dia[x], dia[y], d[x] + d[y] + 1});
				d[x] = max(d[x], d[y] + 1);
			}
		}
	};
	int ans = 0;
	for (int i =0; i<n; i++){
		for (auto j : adj[i]){
			if (i < j){
				dfs(dfs,i,j);
				dfs(dfs,j,i);
				ans = max(ans, dia[i] * dia[j]);
			}
		}
	}
	cout << ans << endl;




	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}