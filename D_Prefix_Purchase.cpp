#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(auto &x : c) cin >> x;
    int k;
    cin >> k;
    
    for (int i = n-2; i>=0; i--){
		c[i] = min(c[i], c[i+1]);
	}

	vector<int> a(n);
	int t = k;
	for (int i =0; i<n; i++){
		int v = c[i] - (i ? c[i-1] : 0);
		if (v > 0){
			t = min(t, k/v);
		}
		k -= t * v;
		a[i] = t;
		cout << a[i] << " ";
	}
	cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}