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
	 int A, B, n;
    std::cin >> A >> B >> n;
    
    if (B == 0) {
        std::cout << 0 << "\n";
        return 0;
    }
    
    if (A == 0) {
        std::cout << "No solution\n";
        return 0;
    }
    
    int v = B / A, x;
    if (v < 0) {
        v = -v;
        if (n % 2 == 0) {
            std::cout << "No solution\n";
            return 0;
        }
        x = std::pow(v, 1. / n) + .5;
        x = -x;
    } else {
        x = std::pow(v, 1. / n) + .5;
    }
    
    for (int i = 0; i < n; i++) {
        A *= x;
    }
    if (A != B) {
        std::cout << "No solution\n";
    } else {
        std::cout << x << "\n";
    }
    
    return 0;
}