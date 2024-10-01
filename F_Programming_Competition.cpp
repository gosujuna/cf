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
    int n;
    cin >> n;
    vector<int> p(n);
	vector<vector<int>> adj(n);

	for (int i =1; i<n; i++){
		cin >> p[i];
		p[i]--;
		adj[p[i]].push_back(i);
	}

	vector<int> siz(n);
	auto dfs1 = [&](auto&& self, int x) -> void {
		siz[x] = 1;
		for (auto y : adj[x]){
			self(self,y);
			siz[x] += siz[y];
		}
	};
	dfs1(dfs1,0);

	auto dfs = [&](auto&& self, int x) -> int {
		int mx = 0;
		for (auto y : adj[x]){
			mx = max(mx,siz[y]);
		}
		if (mx * 2 > siz[x] - 1){
			for (auto y : adj[x]){
				if (siz[y] == mx){
					int v = self(self,y);
					return v + min((siz[x] - 1 - 2*v)/2, siz[x] -1 - mx);
				}

			}
			
		} else{
			return (siz[x] -1) / 2;
		}
	};
	int ans = dfs(dfs,0);
	cout << ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}