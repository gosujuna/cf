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

const int INF = 1e18;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1);
    vector<int> b(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int n1 = n - 1;
    int i = 0, j = 0;
    int K0 = 0;
    vector<bool> used_b(n, false);

    while (i < n1 && j < n) {
        if (a[i] < b[j]) {
            K0++;
            used_b[j] = true;
            i++;
            j++;
        } else {
            j++;
        }
    }

    // Collect unmatched b_i
    vector<int> unmatched_b;
    for (int idx = 0; idx < n; idx++) {
        if (!used_b[idx]) {
            unmatched_b.push_back(b[idx]);
        }
    }

    sort(unmatched_b.begin(), unmatched_b.end());

    int u = 0; // Total number of c[i][1] that can be matched
    int last_i = 0;

    for (int idx = 0; idx < unmatched_b.size(); idx++) {
        int bi = unmatched_b[idx];
        int curr_i = min(bi - 1, m);
        if (curr_i > last_i) {
            int matches = curr_i - last_i;
            u += matches;
            last_i = curr_i;
            if (u >= m) {
                u = m;
                break;
            }
        }
    }

    int total_ops = (n - K0) * m - u;
    cout << total_ops << '\n';
}




signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}