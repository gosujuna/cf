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
int cnt =0;
void solve() {
    cnt++;
    int n; 
    double p;
    cin >> n >> p;
    
    double prob1 = p / 100.0;
    
    
    double log_prob2 = (n - 1) * log(prob1);
    
    
    double prob3 = exp(log_prob2 / n);
    
    
    double ans = 100.0 * (prob3 - prob1);

    cout << "Case #" << cnt << ":" << endl;
    cout << fixed << setprecision(15) << ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}

// x ^ ans == (x-1) ^ p 