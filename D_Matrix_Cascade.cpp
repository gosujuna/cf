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
	// looknice;
	int n;
	cin >> n;
	vector a(n,vector<int>(n));
	vector b(n,vector<int>(n));

	for (int i =0; i<n; i++){
		string s;
		cin >> s;
		for (int j =0; j<n; j++){
			a[i][j] = s[j] - '0';
		}
	}
	int ans = 0;
	for (int i =0; i<n; i++){
		for (int j =0; j<n; j++){
			a[i][j] ^= b[i][j];
            ans += a[i][j];
            b[i][j] ^= a[i][j];
            a[i][j] ^= b[i][j];
            if (i + 1 < n) {
                a[i + 1][j] ^= b[i][j];
                if (j - 1 >= 0) {
                    b[i + 1][j - 1] ^= b[i][j];
                } else if (i + 2 < n) {
                    b[i + 2][j] ^= b[i][j];
                }
                if (j + 1 < n) {
                    b[i + 1][j + 1] ^= b[i][j];
                } else if (i + 2 < n) {
                    b[i + 2][j] ^= b[i][j];
                }
                if (i + 2 < n) {
                    b[i + 2][j] ^= b[i][j];
                }
            }
            b[i][j] = 0;
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