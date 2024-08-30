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
	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	vector<vector<int>> adjlist(n);

	

	for (int i =1; i<n; i++){
		int parent;
		cin >> parent;
		parent--;
		adjlist[parent].push_back(i);
	}

	auto dfs = [&](auto dfs, int v) -> ll {
		ll mini = 1e18;
		for (int& u : adjlist[v]){
			ll ch = dfs(dfs,u);
			mini = min(mini,ch);
		}
		if (mini == 1e18){
			return a[v];
		}

		if (v== 0){
			return a[v] + mini;
		}

		if (a[v] <= mini){
			return (a[v] + mini)/2;
		} else{
			return mini;
		}

		
	};
	ll ans = dfs(dfs,0);
	cout << ans << endl;

	

	


	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}