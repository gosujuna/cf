#include <bits/stdc++.h>

using namespace std;

#define int long long


void solve(){
	int n,c; 
	cin >> n >> c;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	vector<vector<int>> adj(n);
	for (int i =1; i<n; i++){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector dp(n,vector<int>(2));
	auto dfs = [&](auto& self, int x, int p) -> void {
		dp[x][0] = 0;
		dp[x][1] = a[x];
		for (auto y : adj[x]){
			if (y==p){
				continue;
			}
			self(self,y,x);
			dp[x][0] += max(dp[y][0], dp[y][1]);
			dp[x][1] += max(dp[y][0], dp[y][1] - 2 * c);
		}
	};

	dfs(dfs,0,-1);

	int ans = max(dp[0][0], dp[0][1]);

	cout << ans << endl;
	 

}


signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}