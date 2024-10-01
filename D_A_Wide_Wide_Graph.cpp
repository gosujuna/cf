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
	int n;
	cin >> n;
	vector<vector<int>> adj(n);
	for (int i =0; i<n-1; i++){
		int u ,v ;
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> dist(n,-1);

	auto bfs = [&](int x){
		queue<int> q;
		dist.assign(n,-1);
		dist[x] = 0;
		q.push(x);
		while (!q.empty()){
			int x = q.front();
			q.pop();
			for (auto y : adj[x]){
				if (dist[y] == -1){
					dist[y] = dist[x] + 1;
					q.push(y);
				}
			}
		}


		return max_element(all(dist)) - dist.begin();
	};

	int x = bfs(0);

	int y = bfs(x);
	auto dx = dist;
	bfs(y);
	auto dy = dist;

	vector<int> ans(n+1);

	for (int i =0; i<n; i++){
		ans[max(dx[i], dy[i]) +1] += 1;
	}
	ans[0] += 1;
	ans[dx[y] +1] -=1;

	for (int i =1; i<=n; i++){
		ans[i] += ans[i-1];
	}

	for (int i =1; i<=n; i++){
		cout << ans[i] << " \n"[i==n];
	}




}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}