#include <bits/stdc++.h>
using namespace std;
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
vector<int> adj[20000];
vector<int> c(20000);

int dfs(int v, int p, int uc) { 
	int ans = 0;
	if (c[v] != uc){
		uc = c[v];
		ans++;
	} 
	for (int i: adj[v]){
		if (i!= p){
			ans += dfs(i, v, uc);
		}
	}
	return ans;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;


	 for (int i = 2; i <= n;i++){
		int t;
		cin >> t;
		adj[t].push_back(i);
	 }

	 for (int i = 1; i <= n; i++) {
		cin >> c[i];
	 }

	 cout << dfs(1, 0, 0) << endl;
}