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
	int n, t;
	cin >> n >> t;
	vector<vector<pair<int,int>>> adj(n);

	for (int i =0; i<t; i++){
		int m;
		cin >> m;
		for (int j =0; j<m; j++){
			int x, y;
			cin >> x >> y;
			x--;
			y--;
			adj[x].emplace_back(y,i);
			adj[y].emplace_back(x,i);
		}
	}
	int k;
	cin >> k;
	vector<int> a(k);
	vector<vector<int>> pos(t);
	for (int i =0; i<k; i++){
		cin >> a[i];
		a[i]--;
		pos[a[i]].push_back(i);
	}

	priority_queue<pair<int,int>,vector<pair<int,int>>, greater<>> pq;
	pq.emplace(0,0);
	vector<int> dis(n,-1);

	while (!pq.empty()){
		auto [d,x] = pq.top();
		pq.pop();
		if (dis[x] != -1){
			continue;
		}
		dis[x] = d;
		for (auto [y,i] : adj[x]){
			auto it = lower_bound(all(pos[i]), d);
			if (it != pos[i].end()){
				pq.emplace(*it+1,y);
			}
		}
	}
	debug(dis);
	cout << dis[n-1] << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}