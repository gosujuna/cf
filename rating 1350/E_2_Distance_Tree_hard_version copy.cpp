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
	int n;
	cin >> n;
	vector<vector<int>> g(n);
	
	for (int i =0; i<n-1; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	vector<int> que(1,0); //starts with 0 inside. que[0] = 0
	vector<int> parent(n,-1);
	vector<int> dist(n,-1);
	parent[0] = 0;
	dist[0] = 0;
	
	for (int b = 0; b < sz(que); b++){
		for (int u : g[que[b]]){
			if (dist[u] == -1){
				que.push_back(u);
				dist[u] = dist[que[b]] +1;
				parent[u] = que[b];
			}
		}
	}
	int LOG = 20;
	vector jump(n,vector<int> (LOG)); //binary jumping, initialize with parent
	for (int i =0; i<n; i++){
		jump[i][0] = parent[i];
	}
	for (int j =1; j< LOG; j++){
		for (int i =0; i<n; i++){
			jump[i][j] = jump[jump[i][j-1]][j-1];
		}
	}

	// j goes first because that is the layer
	//highlight of the code : finding the LCA : 
	auto LCA = [&](int u, int v){
		if (dist[u] < dist[v]){
			swap(u,v);
		}
		for (int j = LOG -1 ; j>=0; j--){
			if (dist[u] - (1 << j) >= dist[v]){
				u = jump[u][j];
			}
		}
		if (u == v){
			return u;
		}
		for (int j = LOG - 1; j>=0; j--){
			if (jump[u][j] != jump[v][j]){
				u = jump[u][j];
				v = jump[v][j];
			}// only jumps if jumping them makes them unequal, so stops right before they are equal.
		}
		return parent[u];
	};

	auto getdist = [&](int u , int v){
		return dist[u] + dist[v] - 2*dist[LCA(u,v)];
	};

	int x = que.back();
	int y = que.back();
	int d = 0;
	vector<int> res(n+1, dist[que.back()]); // max dist from tree
	for (int b = sz(que) -1; b >=1; b--){
		int z = que[b];
		int d_xz = getdist(x,z);
		int d_yz = getdist(y,z);
		if (max (d_xz,d_yz) > d){
			if (d_xz > d_yz){
				y = z;
				d = d_xz;
			} else{
				x = z;
				d = d_yz;
			}
		}
		int bound = dist[que[b-1]];
		int rad = (d+1)/2;
		int weight = bound - rad;
		if (weight > 0){
			res[weight] = min(res[weight],bound);
		}
	}
	
	for (int i =n; i>1; i--){
		res[i-1] = min(res[i-1], res[i]);
	}
	for (int i =1; i<=n; i++){
		cout << res[i] << " \n"[i==n];
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