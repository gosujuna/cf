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
	int n;
	cin >> n;
	
	vector<vector<pair<int,int>>> adj(n);
	vector<int> f(n), e(n);
	e[0] = n;

	for (int i =0; i<n-1; i++){
			int a, b;
			cin >> a >> b;
			a--;
			b--;
			adj[a].emplace_back(b,i);
			adj[b].emplace_back(a,i);

	}

	auto dfs = [&] (auto& self, int x, int p) -> void  {
		for (auto [y, i] : adj[x]){
			if (y==p){
				continue;
			}
			e[y] = i;
			f[y] = f[x] + (i < e[x]);
			self(self,y,x);
		}
	};

	dfs(dfs,0,-1);

	auto ans = *max_element(all(f));
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