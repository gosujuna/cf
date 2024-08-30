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
	int n;
    std::cin >> n;
    
    std::vector a(n, std::vector<i64>(n));
    int r, c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
            if (a[i][j] == 0) {
                r = i, c = j;
            }
        }
    }
    
    if (n == 1) {
        std::cout << 1 << "\n";
        return 0;
    }
    
    i64 sum = std::accumulate(a[(r + 1) % n].begin(), a[(r + 1) % n].end(), 0LL);
    i64 csum = std::accumulate(a[r].begin(), a[r].end(), 0LL);
    i64 x = sum - csum;
    if (x <= 0) {
        std::cout << -1 << "\n";
        return 0;
    }
    a[r][c] = x;
    
    for (int i = 0; i < n; i++) {
        if (std::accumulate(a[i].begin(), a[i].end(), 0LL) != sum) {
            std::cout << -1 << "\n";
            return 0;
        }
        i64 sc = 0;
        for (int j = 0; j < n; j++) {
            sc += a[j][i];
        }
        if (sc != sum) {
            std::cout << -1 << "\n";
            return 0;
        }
    }
    
    i64 s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        s1 += a[i][i];
        s2 += a[i][n - 1 - i];
    }
    if (s1 != sum || s2 != sum) {
        std::cout << -1 << "\n";
        return 0;
    }
    std::cout << x << "\n";


}