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


void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    a--; b--;

    vector<vector<pair<int,int>>> adj(n);

    for (int i = 0; i < n-1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    vector<int> f(n);
	set<int> s;
	auto dfs = [&](auto&& self, int x, int t, int p) -> void {
		if (x != b){
			s.insert(f[x]);
		}
		for (auto [y, z] : adj[x]){
			if (y== p || y == t){
				continue;
			}
			f[y] = f[x] ^ z;
			self(self,y,t,x);
		}
	};
	f[a] = 0;
	dfs(dfs,a,b,-1);
	auto t = s;
	s.clear();
	f[b] = 0;
	dfs(dfs,b,-1,-1);

	for (auto x :s){
		if (t.count(x)){
			cout << "YES" << endl;
			return;
		}
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