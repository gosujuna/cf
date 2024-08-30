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
	int n, k;
	cin >> n >> k;
	vector<int> cnt(31);
	vector<int> a(n);
	for (int i = 0; i < n;i++){
		cin >> a[i];
		for (int j = 30; j >= 0; --j){
			if (a[i] & (1<<j)){
				++cnt[j];
			}
		}
		
	}
	int ans = 0;
	for (int i = 30; i >= 0; --i){
		int need = n - cnt[i];
		if (need <=k) {
			k-= need;
			ans += (1 << i);
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