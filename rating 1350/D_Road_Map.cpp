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
	int n,r1,r2;
	cin >> n >> r1 >> r2;
	r1--;
	r2--;
	vector<vector<int>> adj(n);
	for (int i =0; i<n; i++){
		if (i != r1){
			int p;
			cin >> p;
			p--;
			adj[p].push_back(i);
			adj[i].push_back(p);
		}
	}
	vector<int> parent(n,-1);

	auto dfs = [&](auto&& self, int x) -> void {
		for (auto y: adj[x]){
			if (y == parent[x]){
				continue;
			}
			parent[y] = x;
			self(self,y);
		}
	};
	dfs(dfs, r2);

	for (int i =0; i<n; i++){
		if (i != r2){
			cout << parent[i] + 1 << " ";
		}
	}
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}