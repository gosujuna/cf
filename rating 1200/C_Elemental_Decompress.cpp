#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
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
	vector<int> a(n);
	vector<int> cnt(n);
	for (auto &i:a){
		cin >> i;
		i--;
	}

	for (int i = 0; i < n; i++){
		cnt[a[i]]++;
	}

	 for (int i = 0; i < n; i++) {
        if (cnt[i] > 2) {
            std::cout << "NO\n";
            return;
        }
    }
	vector<int> cand;
	vector<vector<int>> adj(n);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2 - cnt[i]; j++){
			cand.push_back(i);
		}
		for (int j = 0; j < cnt[i]; j++){
			if (cand.empty()){
				cout << "NO" << endl;
				return;
			}
			adj[i].push_back(cand.back());
			adj[cand.back()].push_back(i);
			cand.pop_back();
		}
	}
	debug(cand);
	debug(adj);

	vector<vector<pair<int, int>>> pairs(n);
	vector<int> vis(n);

	for (int i = 0; i < n; i++){
		if (vis[i]){
			continue;
		}
		int x = i, y = adj[x][0];
		while (!vis[x]){
			vis[x] = 1;
			pairs[max(x, y)].emplace_back(x,y);
			tie(x,y) = pair(y, x^adj[y][0] ^ adj[y][1]);

		}
	}

		vector<int> x(n);
	vector<int> y(n);
	for (int i = 0; i < n; i++){
		tie(x[i], y[i]) = pairs[a[i]].back();
		pairs[a[i]].pop_back();
	}

		cout << "YES" << endl;
	for (auto &i:x){
		cout << i+1 << " ";
		
	}
	cout << endl;
	for (auto &i:y){
		cout << i+1 << " ";
		
	}
	cout << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}