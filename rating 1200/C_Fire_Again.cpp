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



signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> x(k), y(k);
    for (int i = 0; i < k; i++) {
        cin >> x[i] >> y[i];
    }
    
    int X = 1, Y = 1, ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int d = 1E9;
            for (int l = 0; l < k; l++) {
                d = min(d, abs(i - x[l]) + abs(j - y[l]));
            }
            if (d > ans) {
                X = i;
                Y = j;
                ans = d;
            }
        }
    }
    cout << X << " " << Y << "\n";
    
    return 0;
	
	
}