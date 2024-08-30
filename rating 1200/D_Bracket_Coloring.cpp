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
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    int c = std::count(s.begin(), s.end(), '(');
    if (2 * c != n) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::vector<int> ans(n, 2);
    
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            a.push_back(i);
        } else if (!a.empty()) {
            ans[i] = 1;
            ans[a.back()] = 1;
            a.pop_back();
        }
    }
    
    if (std::count(ans.begin(), ans.end(), 2)) {
        a.clear();
        ans.assign(n, 2);
        for (int i = 0; i < n; i++) {
            if (s[i] == ')') {
                a.push_back(i);
            } else if (!a.empty()) {
                ans[i] = 1;
                ans[a.back()] = 1;
                a.pop_back();
            }
        }
    }
    std::cout << *std::max_element(ans.begin(), ans.end()) << "\n";
    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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