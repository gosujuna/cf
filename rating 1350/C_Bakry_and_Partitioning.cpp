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
	vector<int> a(n);
	
	for (int i =0; i<n; i++){
		cin >> a[i];
		
	}

	vector g(n, vector<int>(0));
	for (int i =0; i<n-1; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	auto s = a;
	auto dfs = [&](auto self, int x, int p) -> void {
		for (auto y: g[x]){
			if (y==p){
				continue;
			}
			self(self,y,x);
			s[x] ^= s[y];
		}
	};
	dfs(dfs,0,-1);

	if (s[0] == 0){
		cout << "YES" << endl;
		return;
	}

	if ( k== 2){
		cout << "NO" << endl;
		return;
	}
	int cnt = 1;
	auto dfs1 = [&](auto self, int x, int p) -> int {
		int sum = a[x];
		for (auto y : g[x]){
			if (y == p){
				continue;
			}
			sum ^= self(self,y,x);
		}
		if (sum == s[0]){
			cnt += 1;
			return 0;

		}
		return sum;
	};
	dfs1(dfs1, 0, -1);
	if (cnt >= 3){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
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