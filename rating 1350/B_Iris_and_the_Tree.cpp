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
// looknice;
	// int n, w;
	// cin >> n >> w;
	// vector<int> p(n);
	// vector<vector<int>> adj(n);
	// for (int i =1; i<n; i++){
	// 	cin >> p[i];
	// 	p[i]--;
	// 	adj[p[i]].push_back(i);
	// }

	// int cur = 0;
	// vector<vector<int>> f(n);
	// vector<int> cnt(n);
	

	
	// auto dfs = [&](auto&& self, int x) -> void { 
	// 	cur++;
	// 	for (auto y : adj[x]){
	// 		f[y].push_back(cur-1);
	// 		cnt[cur-1]++;
	// 		self(self,y);
	// 		f[y].push_back(cur-1);
	// 		cnt[cur-1]++;
	// 	}
	// };
	// dfs(dfs,0);
	// debug(cnt);
	
	// int sum =0;
	// int tot = n;
	

	// for (int i =1; i<n; i++){
	// 	int x,y;
	// 	cin >> x >> y;
	// 	x--;
	// 	for (auto j : f[x]){
	// 		cnt[j]--;
			
	// 		if (cnt[j] == 0){
	// 			tot--;
	// 		}
	// 	}
	// 	sum += y;
	// 	int a = w * tot;
	// 	int b  = sum * (2-tot);
		
	// 	cout << a + b << " \n"[i==n-1];
	// }
	

void solve(){
	int n,w;
	cin >> n >> w;
	vector<vector<int>> adj(n);
	vector<int> p(n);
	for (int i =1; i<n; i++){
		cin >> p[i];
		p[i]--;
		adj[p[i]].push_back(i);
		// each child added

		
	}
	int cur = 0;
	vector<vector<int>> f(n);
	vector<int> cnt(n);

	auto dfs = [&](auto&& self, int x) -> void {
		cur++;
		for (auto i : adj[x]){
			f[i].push_back(cur-1);
			cnt[cur-1]++;
			self(self,i);
			f[i].push_back(cur-1);
			cnt[cur-1]++;
		}
	};

	dfs(dfs,0);
	int tot = n;
	int sum  =0;

	for (int i =1; i<n; i++){
		int x, y;
		cin >> x >> y;
		x--;
		for (auto j : f[x]){
			cnt[j]--;
			if (cnt[j] == 0){
				tot--;
			}
		}
		sum +=y;
		int ans = w * tot + sum * (2 - tot);
		cout << ans << " \n"[i==n-1];
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