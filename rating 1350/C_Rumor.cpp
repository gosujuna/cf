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


void solve(){
	// looknice;
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<bool> visit(n,false);
	vector<vector<int>> adj(n);
	for (int i =0; i<m; i++){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int gold = 1e9 + 1;
	int ans = 0;
	
	auto dfs = [&](auto&& self, int node){
		if (visit[node] == true){
			return;
		}
		visit[node] = true;
		gold = min(gold,a[node]);

		for (auto i : adj[node]){
			self(self,i);
		}
	};
	for (int i =0; i<n; i++){
		if (visit[i] == false){
			dfs(dfs,i);
			ans += gold;
			gold = 1e9 + 1;

		}
		
	}

	cout << ans << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}