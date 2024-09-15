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
	int N = 1e6 + 7;
	vector<int> d(N);
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            d[j]++;
        }
    }
	int ans = 0;
	 int a, b, c;
	 cin >> a >> b >> c;
	 int mod = 1073741824;
	 for (int i = 1; i<=a; i++){
		for (int j = 1; j<=b; j++){
			for (int k =1; k<=c; k++){
				ans += d[i * j *k];
			}
		}

	 }
	 cout << ans << endl;

}