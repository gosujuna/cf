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

void solve() {
    int n, k;
    cin >> n >> k;
    
    
    int total_grown = (n * (n + 1)) / 2;
    
    
    int fallen = 0;
    if (n > k) {
        int first_fallen_year = n - k;
        fallen = (first_fallen_year * (first_fallen_year + 1)) / 2;
    }
    
    
    int current_leaves = total_grown - fallen;
    
    
    if (current_leaves % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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