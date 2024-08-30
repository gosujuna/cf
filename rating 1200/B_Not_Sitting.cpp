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
	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; ++j){
			v.push_back(max(i, n - i - 1) + max(j, m - j - 1));
		}

	}
	sort(all(v));
	for (int i = 0; i < n * m; i++){
		cout << v[i] << " ";
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