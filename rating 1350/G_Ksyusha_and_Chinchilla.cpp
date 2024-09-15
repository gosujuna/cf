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
	
	vector<vector<pair<int,int>>> adj(n);
	for (int i =0; i<n-1; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].emplace_back(v,i);
		adj[v].emplace_back(u,i);
	}
	vector<int> ans;
	auto dfs = [&](auto&& self, int x, int p) -> int {
		int cnt1 = 0, cnt2 = 0;
		for (auto [y,i] : adj[x]){
			if (y== p){
				continue;
			}
			int v = self(self,y,x);
			if (v == -1){
				return -1;
			}
			if (!v){
				ans.push_back(i);
			} else if (v== 1){
				cnt1++;
			} else{
				cnt2++;
			}
		}
		if (!cnt1 && !cnt2){
			return 1;
		} else if (cnt2==1 && cnt1 == 0){
			return 0;
		} else if (cnt2){
			return -1;
		} else if (cnt1 == 1){
			return 2;
		} else if (cnt1 == 2){
			return 0;
		} else{
			return -1;
		}

	};

	if (dfs(dfs,0,-1) != 0){
		cout << -1 << endl;
		return;
	}
	cout << ans.size() << endl;
	for (auto i : ans){
		cout << i+1 << " ";
	} 
	cout << endl;

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}