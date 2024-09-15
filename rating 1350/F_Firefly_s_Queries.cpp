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
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice; three parts of query: the full part, which we return prefix sums, and left and right parts;
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> pre(n+1,0);
	
	for (int i =1; i<=n; i++){
		pre[i] = pre[i-1] + a[i-1];
	}

	auto query = [&](int m) {
        int u = m / n;
        int res = pre[n] * u;
        int v = m % n;
        if (v > 0) {
            if (u + v <= n) {
                res += pre[u + v] - pre[u];
            } else {
                res += pre[u + v - n] + pre[n] - pre[u];
            }
        }
        return res;
    };
	

	while (q--){
		int l, r;
		cin >> l >> r;
		l--;
		int ans = query(r) - query(l);
		cout << ans << endl;


	}
	

		
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}