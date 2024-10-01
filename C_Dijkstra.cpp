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
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int,int>>> adj(n);

	for (int i =0; i<m; i++){
		int u,v,w;
		cin >> u >> v >> w;
		u--;
		v--;
		adj[u].emplace_back(v,w);
		adj[v].emplace_back(u,w);
	}
	vector<int> dis(n,-1);
	vector<int> pre(n,-1);
	priority_queue<tuple<int,int,int>> h;
	h.emplace(0,0,-1);


	while (!h.empty()){
		auto [d,x,t] = h.top();
		h.pop();
		if (dis[x] != -1){
			continue;
		}
		dis[x] = -d;
		pre[x] = t;
		for (auto [y,w] : adj[x]){
			h.emplace(d-w,y,x);
		}
	}

	if (dis[n-1] == -1){
		cout << -1 << endl;
		return;
	}

	vector<int> a;
	for (int x = n-1; x != -1; x=pre[x]){
		a.push_back(x);
	}
	reverse(all(a));
	for (auto x :a){
		cout << x+1 << " \n"[x==n-1];
	}

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	 
		solve();
	 
}