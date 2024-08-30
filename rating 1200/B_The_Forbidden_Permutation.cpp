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
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> pos(n);
	for (int i = 0; i < n; i++){
		int p;
		cin>>p;
		p--;
		pos[p] = i;
	}


		vector<int> a(m);
	for (auto& i:a){
		cin >> i;
		i--;
	}

	int ans = n;
	for (int i = 1; i < m; i++){
		int x = pos[a[i - 1]], y = pos[a[i]];
		if (d>=n-1){
			ans = min(ans, max(0, y - x));
		} else{
			ans = min(ans, max(0, min(d + 1 - (y - x), y - x)));
		}
	}
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

// 70 45 55 50