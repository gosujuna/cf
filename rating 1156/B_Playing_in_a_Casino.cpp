#include <bits/stdc++.h>
#include "zdebug.h"



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

void solve(){
	int n,m;
	cin >> n >> m;
	vector<vector<ll>> a(m, vector<ll> (n));

	for (int i = 0; i < n;i++){
		for (int j = 0; j < m; j++){
			ll k;
			cin >> k;
			a[j][i] = k;
		}
	}

	for (int i = 0; i < m; i++){
		sort(a[i].rbegin(), a[i].rend());
	}


	ll sum = 0;

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			sum += a[i][j] * (n - 1 - 2 * j);
		}
	}



	cout << sum << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}