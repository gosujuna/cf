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
	ll n, k;
	cin >> n >> k;

	vector<vector<int>> a(n, vector<int>(n));

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	debug(a);

	vector<vector<int>> b(n, vector<int>(n));
	ll count = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			b[i][j] = a[n-1 - i][n-1 - j];
			if (b[i][j] != a[i][j]){
				count++;
			}
		}
	}
	count = count / 2;

	bool ans = false;
	if (n % 2 == 0){
		if (count <= k && (k-count) % 2 == 0){
		ans = true;
	}
	}
	else{
		if (count <= k){
				ans = true;
		}
	}
	

	cout << (ans ? "YES" : "NO") << endl;

	debug(b);
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}