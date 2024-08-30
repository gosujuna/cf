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
	int n, s;
	cin >> n >> s;

	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}

	int ans = n + 1;
	int cur = 0;
	for (int i = 0, j = 0; i < n; i++){
		while (j<n && cur + a[j] <= s){
			cur += a[j];
			j++;
		}
		if (cur == s){
			ans = min(ans, n - (j - i));
		}
		cur -= a[i];
	}
	if (ans > n){
		ans = -1;
	}
		cout << ans << endl;

	
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