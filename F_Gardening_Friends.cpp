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
	int n , k, c;
	cin >> n >> k >> c;

	vector adj(n,vector<int>());

	for (int i =0; i<n-1; i++){
		int u, v;
		cin >> u >> v; 
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	auto bfs = [&](int s){
		vector<int> dist(n,-1);
		dist[s] = 0;
		queue<int> q;
		q.push(s);
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

	auto dis = bfs(0);

	int tempdis = -1;
	int ind = -1;
	for (int i =0; i<n; i++){
		if (dis[i] > tempdis){
			tempdis = dis[i];
			ind = i;
		}
	}
	auto dis2 = bfs(ind);
	
	
	int ans = -1;

	for (int i =0; i<n; i++){
		int help = dis2[i] * k - dis[i] *c;
		ans = max(help,ans); 
	}
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