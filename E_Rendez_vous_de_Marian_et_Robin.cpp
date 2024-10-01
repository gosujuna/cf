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
    int n, m, h;
    cin >> n >> m >> h;

    vector<vector<pair<int,int>>> adj(n);

    set<int> horse;
    for (int i = 0; i < h; i++) {
        int z;
        cin >> z;
        z--;
        horse.insert(z);
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

	auto calc = [&] (int s){
		vector<int> dis(2*n, 1e15);
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
		pq.emplace(0LL, 2 * s);
		while (!pq.empty()){
			auto [d,u] = pq.top();
			pq.pop();
			if (dis[u] != 1e15){
				continue;
			}
			dis[u] = d;
			int x = u/2;
			int t = u % 2;
			if (!t && horse.count(x)){
				pq.emplace(d, 2 *x + 1);
			}
			for (auto [y,w] : adj[x]){
				pq.emplace(d + (t ? w/2 : w), 2 * y + t);
			}
		}
		vector<int> d(n,1e15);
		for (int i =0; i<n; i++){
			d[i] = min(dis[2*i], dis[2*i +1]);
		}
		return d;
	};
	auto dstart = calc(0);
	auto dend = calc(n-1);

	int ans = 1e15;
	for (int i =0; i<n; i++){
		ans = min(ans, max(dstart[i], dend[i]));
	}
	if (ans == 1e15){
		cout << -1 << endl;
	} else{
		cout << ans << endl;
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