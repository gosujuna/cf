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

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


int query(int x) {
    std::cout << "- " << x << std::endl;
    int ans;
    std::cin >> ans;
    return ans;
}
 
void solve() {
    int cur;
    std::cin >> cur;
    
    int k = 1, ans = 0;
    bool last = false;
    while (cur > 0) {
        ans += last ? k / 2 : k;
        int r = query(last ? k / 2 : k);
        if (r < cur) {
            last = false;
            cur = r;
        } else {
            last = true;
        }
        k *= 2;
		
		
    }
    
    std::cout << "! " << ans << std::endl;
}
 

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}