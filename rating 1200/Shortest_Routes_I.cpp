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
	// looknice;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n,m;
	 cin >> n >> m;
	 vector<vector<pair<int,int>>> adj(n);
	 for (int i=0; i<m; i++){
		int a,b,c;
		cin >> a >> b >> c;
		a--;
		b--;
		adj[a].emplace_back(b,c);
		
	 }
	 vector<int> path(n,1e18);
	 path[0] = 0;
	 priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	 pq.emplace(0,0);
	 while (!pq.empty()){
		int cost = pq.top().first;
		int node = pq.top().second;
		pq.pop();
		if (cost != path[node]){
			continue;
		}
		for (auto& [adjnode, adjcost]: adj[node]){
			int newdist = cost + adjcost;
			if (newdist < path[adjnode]){
				path[adjnode] = newdist;
				pq.emplace(newdist, adjnode);
			}
		}
	 }
	 for (int i =0; i<n; i++){
		cout << path[i] << " \n"[n==n-1];
	 }
}