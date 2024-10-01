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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> f(n);
	vector<bool> vis(n);
	vector<vector<pair<int,int>>> adj(n);
    while(m--){
        int a, b, d;
        cin >> a >> b >> d;
        a--;
		b--;
		adj[a].emplace_back(b,-d);
		adj[b].emplace_back(a,d);
    }

	for (int i =0; i<n; i++){
		if (!vis[i]){
			vis[i] = true;
			queue<int> q;
			q.push(i);
			while (!q.empty()){
				int x = q.front();
				q.pop();
				for (auto [y,d] : adj[x]){
					if (!vis[y]){
						vis[y] = true;
						q.push(y);
						f[y] = f[x] + d;

					} else if (f[y] != f[x] + d){
						cout << "NO" << endl;
						return;
					}
				}
			}
		}
	}


    
        cout << "YES\n";
    
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}