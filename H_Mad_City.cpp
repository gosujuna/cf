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






void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    a--; b--;
    vector<vector<int>> adj(n);

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

	auto bfs = [&](int start){
		vector<int> dist(n,-1);
		dist[start] = 0;
		queue<int> q;
		q.push(start);
		while (!q.empty()){
			int x = q.front();
			q.pop();
			for (auto y : adj[x]){
				if (dist[y] == -1){
					dist[y] = dist[x]+1;
					q.push(y);
				}
			}
		}
		return dist;
	};

    
	
    vector<int> dist_a = bfs(a);
    vector<int> dist_b = bfs(b);

	int u = -1;
	vector<bool> vis(n);
	vector<int> par(n), dep(n);
	auto dfs = [&](auto self, int x) -> void {
		vis[x] = true;
		for (auto y : adj[x]){
			if (vis[y] == false){
				par[y] = x;
				dep[y] = dep[x] + 1;
				self(self,y);
			} else if (dep[y] < dep[x] - 1){
				for (int i =x; ; i = par[i]){
					if (u == -1 || dist_b[i] < dist_b[u]){
						u = i;
					}
					if (i == y){
						break;
					}
				}
			}
		}
	};

	dfs(dfs,0);

    
	if (dist_b[u] < dist_a[u]) {
		cout << "YES" << endl;
		return;
	}
    

    cout << "NO" << endl;
}


signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}