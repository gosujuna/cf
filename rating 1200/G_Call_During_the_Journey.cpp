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
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	int n,m;
	cin >> n >> m;
	int t0, t1, t2;
	cin >> t0 >> t1 >> t2;
	// reverse djikstras
	vector<vector<pair<int,pair<int,int>>>> adj(n);
	for (int i =0; i<m; i++){
		int u, v, l1, l2;
		cin >> u >> v >> l1 >> l2;
		u--;
		v--;
		adj[u].push_back({v, {l1,l2}});
		adj[v].push_back({u, {l1,l2}});
	}

	vector<int> earliest_arrival(n, -1);
	earliest_arrival[n-1] = t0;
	priority_queue<pair<int,int>> pq;
	pq.push({t0,n-1});

	while (!pq.empty()){
		auto curcost = pq.top().first;
		auto earlynode = pq.top().second;
		pq.pop();
		if (curcost < earliest_arrival[earlynode]){
			continue;
		}

		for (int curtime : {curcost, min(curcost, t1)}){
			for (auto& [v, edgecost] : adj[earlynode]){
				int walkcost = edgecost.second;
				int buscost = edgecost.first;
				int d = curtime - buscost;
				if (d >= t2 || curtime <= t1){
					if (d > earliest_arrival[v]){
						earliest_arrival[v] = d;
						pq.push({d,v});
					}
				} else{
					d = curtime - walkcost;
					if (d > earliest_arrival[v]){
						earliest_arrival[v] = d;
						pq.push({d,v});
					}
				}
			}
		} 
	}
	debug(earliest_arrival);

	if (earliest_arrival[0] != -1) {
        cout << earliest_arrival[0] << "\n";
    } else {
        cout << "-1\n";
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