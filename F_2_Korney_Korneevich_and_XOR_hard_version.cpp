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
    int n;
	cin >> n;
	vector<int> a(n);

	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	const int V = 8192;
	vector dp(V+1, bitset<V>{});
	vector<vector<int>> f(V+1);

	for (int i =0; i<=V; i++){
		dp[i][0] = 1;
		f[i].push_back(0);
	}

	for (auto x : a){
		auto b = f[x];
		f[x].clear();
		for (auto y : b){
			if (dp[x][x^y] != 1){
				for (int j =x; j <=V && dp[j][x^y] != 1; j++){
					dp[j][x^y] = 1;
					f[j].push_back(x^y);
				}
			}
		}
	}

	vector<int> ans;
	for (int i =0; i<V; i++){
		if (dp[V][i]){
			ans.push_back(i);
		}
	}
 
	cout << ans.size() << endl;
	for (auto x :ans){
		cout << x << " ";
	}
	cout << endl;

}

signed main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     solve();
}
