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

int N = 26;
void solve(){
	// looknice;
	int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    
    vector<vector<int>> prefix_a(n + 1, vector<int>(N, 0));
    vector<vector<int>> prefix_b(n + 1, vector<int>(N, 0));

    for (int i = 0; i < n; i++) {
        prefix_a[i + 1] = prefix_a[i];
        prefix_b[i + 1] = prefix_b[i];
        prefix_a[i + 1][a[i] - 'a']++;
        prefix_b[i + 1][b[i] - 'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int ans = 0;
        for (int i = 0; i < N; i++) {
            int count_a = prefix_a[r][i] - prefix_a[l - 1][i];
            int count_b = prefix_b[r][i] - prefix_b[l - 1][i];
            ans += max(0LL, count_b - count_a);
        }

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