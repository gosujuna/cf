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
	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n);
	for (int i =0; i<m; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<pair<int,int>> edges;

	for (int i =0; i<n; i++){
		// if (adj[i].size() >= 4) {
        // vector<bool> nei(n, false);
        // for (int j : adj[i]) {
        //   nei[j] = true;
        // }
        // vector<int> pv(n, -1);
        // pv[i] = -2;
        // int win = -1;
        // for (int j : adj[i]) {
        //   if (pv[j] == -1) {
        //     vector<int> que(1, j);
        //     pv[j] = i;
        //     for (int b = 0; b < (int) que.size(); b++) {
        //       for (int to : adj[que[b]]) {
        //         if (pv[to] == -1) {
        //           que.push_back(to);
        //           pv[to] = que[b];
        //           if (win == -1 && nei[to]) {
        //             win = to;
        //           }
        //         }
        //       }
        //     }
        //   }
        // }
		if (adj[i].size() >= 4){
			vector<bool> nei(n,false);
			for (int j : adj[i]){
				nei[j] = true;
			}
			vector<int> pv(n,-1);
			pv[i] = -2;
			int win = -1;
			for (int j : adj[i]) {
				if (pv[j] == -1){
					vector<int> que(1,j);
					pv[j] = i;
					for (int b = 0; b < sz(que); b++){
						for (int to : adj[que[b]]) {
							if (pv[to] == -1){
								que.push_back(to);
								pv[to] = que[b];
								if (win == -1 && nei[to]){
									win = to;
								}
							}
						}
					}
				}
			}
		


			if (win != -1){
			edges.emplace_back(i,win);
			int x = win;
			while (x != i){
				edges.emplace_back(x,pv[x]);
				x = pv[x];
			}
			vector<bool> used(n,false);
			for (auto& e: edges){
				used[e.first] = true;
				used[e.second] = true;
			}

			vector<int> rest;
			for (int y : adj[i]){
				if (!used[y]){
					rest.push_back(y);
				}
			}
			edges.emplace_back(rest[0], i);
			edges.emplace_back(rest[1], i);
			break;
			}	
		}
	}
	if (sz(edges) == 0){
			cout << "NO" << endl;
	} else{
			cout << "YES" << endl;
			cout << sz(edges) << endl;
			for (auto [x,y] : edges){
				cout << x+1 << " " << y+1 << endl;
			}
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