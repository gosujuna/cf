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
	int n,k;
	cin >> n >> k;
	vector<int> mark(n);
	for (int i =0; i<k; i++){
		int a;
		cin >> a;
		a--;
		mark[a] = 1;
	}

	vector<vector<int>> g(n);
	
	for (int i =0; i<n-1; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> dis(n);
	auto bfs = [&](int x){
		queue<int> q;
		dis.assign(n,-1);
		q.push(x);
		dis[x] = 0;
		while (!q.empty()){
			int x = q.front();
			q.pop();
			for (auto y : g[x]){
				if (dis[y] == -1){
					dis[y] = dis[x] +1;
					q.push(y);
				}
			}
		}
		int t = -1;
		for (int i =0; i<n; i++){
			if (mark[i] && (t == -1 || dis[i] > dis[t])){
				t=i;
			}
		}
		return t;
	};
	int a = bfs(0);
	int b = bfs(a);
	auto f = dis;
	bfs(b);
	for (int i =0; i<n; i++){
		f[i] = max(f[i], dis[i]);
	}

	int ans = *min_element(all(f));
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