#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int newn,m;
	cin >> newn >> m;
	int n = 1 << newn;
	vector<int> a(m), b(m), c(m);
	string d;
	cin >> d;
	int dest = stoi(d,0,2);
	

	for (int i =0; i<m; i++){
		string x,y;
		
		int cost;
		cin >> cost;
		cin >> x;
		cin >> y;
		
		int u = stoi(x,0,2);
		int v = stoi(y,0,2);
		a[i] = u;
		b[i] = v;
		c[i] = cost;

	}
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

	vector<int> dist(n,-1);

	pq.emplace(0,dest);
	while (!pq.empty()){
		auto [cost,node] = pq.top();
		pq.pop();
		if (dist[node] != -1){
				continue;
		}
		dist[node] = cost;
		for (int i =0; i<m; i++){
			pq.emplace(cost +c[i], (node & ~a[i] | b[i]));
		}
	}

	cout << dist[0] << endl;
	


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}