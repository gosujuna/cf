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

void solve() {
	int n, m;
	cin >> n >> m;
	int cnt[n + 1];
	for (int i = 1; i <= n; i++) {
		cnt[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		cnt[u]++;
		cnt[v]++;
	}
	map<int, int> cnts;
	for (int i = 1; i <= n; i++) {
		cnts[cnt[i]]++;
	}
	vector<int> v;
	for (auto p : cnts) {
		v.push_back(p.second);
	}
	sort(v.begin(), v.end());
	if (v.size() == 3) {
		cout << v[1] << ' ' << v[2] / v[1] << '\n';
	}
	else {
		cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
	}
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}