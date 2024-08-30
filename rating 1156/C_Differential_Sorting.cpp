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
	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}

	if (is_sorted(all(a))){
		cout << 0 << endl;
		return;
	}

	if (a[n-2] > a[n-1] || a[n-1] < 0){
		cout << -1 << endl;
	} else{
		cout << n - 2 << endl;
		for (int i = 0; i < n - 2; i++){
			cout << i+1 << " " << n-1 << " " << n << endl;
		}
	}
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