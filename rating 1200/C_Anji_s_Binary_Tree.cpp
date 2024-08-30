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
	string s; 
	cin >> s;
	vector<int> l(n), r(n);

	for (int i =0; i<n; i++){
		cin >> l[i] >> r[i];
		l[i]--, r[i]--;
	}

	function<int(int)> dfs = [&](int u) -> int {
		if (l[u] == -1 && r[u] == -1){
			return 0;
		}
		int ans = n;
		if (l[u] != -1){
			ans = min(ans,dfs(l[u]) + (s[u] != 'L'));
		}

		if (r[u] != -1){
			ans = min(ans, dfs(r[u]) + (s[u] != 'R'));
		}
		return ans;
	};

	int v = dfs(0);
	cout << v << endl;

	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}