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

void solve() {
    string s;
        cin >> s;
        int maxSortedPref = 0;
        int minNotSortedPref = 0;
        int bal = 0;
        bool good = true;
        
        for (auto c : s) {
            if (c == '+') {
                ++bal;
            } else if (c == '-') {
                --bal;
                maxSortedPref = min(maxSortedPref, bal);
                if (bal < minNotSortedPref)
                    minNotSortedPref = 0;
            } else if (c == '1') {
                maxSortedPref = max(maxSortedPref, bal);
            } else {
                if (bal <= 1) {
                    good = false;
                    break;
                }
                if (minNotSortedPref == 0 || minNotSortedPref > bal)
                    minNotSortedPref = bal;
            }
            if(minNotSortedPref <= maxSortedPref && minNotSortedPref != 0) {
                good = false;
                break;
            }
        }
        
        if (good)
            puts("YES");
        else
            puts("NO");
    }
    std::cout << "YES\n";
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}