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
	vector<vector<pair<int,int>>> adj(n);

	for (int i =0; i<m; i++){
		int u,v,w;
		cin >> u >> v >> w;
		u--;
		v--;
		adj[u].emplace_back(v,w);
		adj[v].emplace_back(u,w);
	}
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.emplace(0,0);
	
	vector<int> dis(n,-1);
	vector<int> a;
	while (!pq.empty()) {
		auto [d,x] = pq.top();
		pq.pop();

		if (dis[x] != -1){
			continue;
		}
		dis[x] = d;
		a.push_back(x);
		if (x == n-1){
			break;
		}
		for (auto [y,w] : adj[x]){
			pq.emplace(d+w,y);
		}
	}

	if (dis[n-1] == -1){
		cout << "inf" << endl;
		return;
	}
	cout << dis[n-1] << " " << a.size() -1 << endl;
	debug(dis);
	debug(a);
	
	for (int i=1; i< a.size(); i++){
		string s(n, '0');
		for (int j =0; j<i; j++){
			s[a[j]] = '1';
		}
		cout << s << " " << dis[a[i]] - dis[a[i-1]] << endl;
	}
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}