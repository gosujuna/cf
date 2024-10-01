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

long long count_triplets(int n) {
    int limit = sqrt(3 * n);
    long long count = 0;
    for (int s = 3; s <= limit; ++s) {
        count += (1LL * (s - 1) * (s - 2)) / 2;
    }
    return count;
}

void solve() {
    int n, x;
    cin >> n >> x;

    int ans = 0;
	for (int i =1; i<= min(n,x); i++){
		for (int j = 1; i  + j <= x && i *j <= n; j++){
			int k = min((n-i*j) /(i+j),  x - i -j);
			ans += k;
		}
	}
	cout << ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}