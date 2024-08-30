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
	 int n, m;
	cin >> n >> m;
	vector<vector<pair<int,int>>> g(n);
	for (int i =0; i<m; i++){
		int x,y,z;
		cin >> x >> y >> z;
		--x; --y;
		g[y].emplace_back(x,z);
	}
	int inf = 1e9;
	vector<array<int,2>> dist(n, {inf,inf});
	dist[n-1][0] = dist[n-1][1] = 0;
	set<pair<int,int>> s;
	s.emplace(0,n-1);

	while (!s.empty()){
		int d = s.begin()->first;
		int i = s.begin()->second;
		s.erase(s.begin());
		for (auto& p: g[i]) {
			int j = p.first;
			int type = p.second;
			if (d+1 < dist[j][type]){
				auto it = s.find(make_pair(max(dist[j][0], dist[j][1]), j));
				if (it != s.end()){
					s.erase(it);
				}
				dist[j][type] = d+1;
				s.emplace(max(dist[j][0], dist[j][1]),j);

			}
			
		}

	}
	int d = max(dist[0][0], dist[0][1]);
	cout << (d==inf ? -1 : d) << endl;
	for (int i =0; i<n; i++){
		cout << (dist[i][0] > dist[i][1] ? '0' : '1');
	} 
	cout << endl;
}