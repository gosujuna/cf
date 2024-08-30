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

void solve(){
	// looknice;
	
}

signed main() {
	 std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    
    vector f(6, vector<string>());
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        
        f[s.size()].push_back(s);
    }
    i64 ans = 0;
    for (int x = 1; x <= 5; x++) {
        for (int y = 1; y <= 5; y++) {
            if ((x + y) % 2 == 0) {
                vector<int> cnt(100);
                int h = (x + y) / 2;
                for (auto a : f[x]) {
                    int s = 50;
                    for (int i = 0; i < x; i++) {
                        if (i < h) {
                            s += a[i] - '0';
                        } else {
                            s -= a[i] - '0';
                        }
                    }
                    cnt[s] += 1;
                }
                for (auto a : f[y]) {
                    int s = 50;
                    for (int i = 0; i < y; i++) {
                        if (x + i >= h) {
                            s += a[i] - '0';
                        } else {
                            s -= a[i] - '0';
                        }
                    }
                    ans += cnt[s];
                }
            }
        }
    }
    std::cout << ans << "\n";



}