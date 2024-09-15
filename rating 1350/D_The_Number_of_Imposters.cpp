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
	int n,m;
	cin >> n >> m;
	vector adj(n,vector<pair<int,int>>());
	vector<int> deg(n);
	for (int i =0; i<m; i++){
		int u,v;
		string s;
		cin >> u >> v;
		u--;
		v--;
		int w=0;
		cin >> s;
		if (s == "imposter"){
			w = 1;
		}
		adj[u].emplace_back(v,w);
		adj[v].emplace_back(u,w);

	}

	vector<int> f(n,-1);
	int ans = 0;
	for (int i =0; i<n; i++){
		if (f[i] == -1){
			queue<int> q;
			q.push(i);
			f[i] = 0;
			vector<int> cnt(2);
			while (!q.empty()){
				int x = q.front();
				q.pop();
				cnt[f[x]] += 1;
				for (auto [y,w] : adj[x]){
					if (f[y] == -1){
						f[y] = f[x] ^ w;
						q.push(y);
					} else if (f[y] != (f[x] ^ w)){
						ans = -1;
					}
				}
			}
			if (ans != -1){
				ans += max(cnt[0], cnt[1]);
			}
		}
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