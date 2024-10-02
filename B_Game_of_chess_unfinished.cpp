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

void solve(){
	// looknice;
	int x[4], y[4];
    for (int i = 0; i < 4; i++) {
        std::string s;
        std::cin >> s;
        x[i] = s[0] - 'a';
        y[i] = s[1] - '1';
    }
    
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x[3] + dx;
            int ny = y[3] + dy;
            if (nx < 0 || nx > 7 || ny < 0 || ny > 7) {
                continue;
            }
            if ((x[0] == nx) ^ (y[0] == ny)) {
                if (x[2] < std::min(nx, x[0]) || x[2] > std::max(nx, x[0])
                    || y[2] < std::min(ny, y[0]) || y[2] > std::max(ny, y[0])) {
                    continue;
                }
            }
            if ((x[1] == nx) ^ (y[1] == ny)) {
                if (x[2] < std::min(nx, x[1]) || x[2] > std::max(nx, x[1])
                    || y[2] < std::min(ny, y[1]) || y[2] > std::max(ny, y[1])) {
                    continue;
                }
            }
            if (std::abs(x[2] - nx) <= 1 && std::abs(y[2] - ny) <= 1) {
                continue;
            }
            
            std::cout << "OTHER\n";
            return;
        }
    }
    
    std::cout << "CHECKMATE\n";
	






	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}