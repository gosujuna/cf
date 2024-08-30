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
	 int n;
	 cin >> n;
	 vector<int> c(n);
	 for (int i =0; i<n; i++){
		cin >> c[i];
	 }
	 vector<array<string,2>> s(n);

	 for (int i =0; i<n; i++){
		cin >> s[i][0];
		s[i][1] = string(s[i][0].rbegin(), s[i][0].rend());
	 }
	 int inf = 1e18;

	array<int, 2> dp{0,c[0]};

	for (int i =1; i<n; i++){
		array<int,2> g{inf,inf};
		for (int x =0; x<2; x++){
			for (int y=0; y<2; y++){
				if (s[i-1][x] <= s[i][y]){
					g[y] = min(g[y], dp[x] + c[i] * y);
				}
			}
		}
		dp = g;
	}

	auto ans = min(dp[0], dp[1]);
	if (ans == inf){
		ans = -1;
	}
	cout << ans << endl;
	
}