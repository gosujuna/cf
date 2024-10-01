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
struct DSU {
    std::vector<int> f, siz;
    
    DSU() {}
    DSU(int n) {
        init(n);
    }
    
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    int size(int x) {
        return siz[find(x)];
    }
};
void solve(){
	// looknice;
	//case if  if game ends: change all the other ones, have 2n choices for each one that doesnt affect.
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
		a[i] += i;
	}

	int x =0;
	int ans = 0;
	DSU dsu(n);

	vector<bool> vis(n);
	vector<int> b;
	while (0 <= x && x < n && !vis[x]){
		b.push_back(x);
		vis[x] = true;
		x = a[x];
	}

	vector<bool> cyc(n);
	for (int i =0; i<n; i++){
		if (0 <= a[i] && a[i] < n && !vis[i]){
			if (!dsu.merge(i,a[i])){
				cyc[i] = true;
			}
		}
	}
	int sum = 0;
	for (int i =0; i<n; i++){
		if (cyc[i]){
			sum += dsu.size(i);
		}
	}

	if (0 <= x && x < n) {
        for (int i = 0; i < n; i++) {
            if (0 <= a[i] && a[i] < n && vis[i]) {
                if (!dsu.merge(i, a[i])) {
                    cyc[i] = true;
                }
            }
        }
        sum += dsu.size(0);
        ans = 1LL * b.size() * sum;
        ans += 1LL * (n - b.size()) * (2 * n + 1);
		
    } else {
        for (auto x : b) {
            ans += sum + dsu.size(0);
            if (0 <= a[x] && a[x] < n) {
                dsu.merge(x, a[x]);
            }
        }
    }


	ans = 1LL * n * (2 * n + 1) - ans;
    std::cout << ans << "\n";






	




	// // might be easier to count pairs where game ends, and subtract from total n * (2n + 1) choices. 
	// 1 1 1 1 1
	// why does this work? n =5, so maximum possible is 5 * (2n +1) choices. -> 55
	// first, all 5 can be turend 0s. 5 choices
	// so 2th - 4th nodes can be -1. -2, -3, -4.. 

	// so if naturally it exits, we have choices as (# of in path) + (#-1 * #) / 2;

	// similar for 1 1, we have 2 0 choices and -1 -> 3.

	// Harder case is if cycles naturally. Then we have (2n+1) choices for the each nodes that the path doesn't touch, and 
	// cycle choices for eacn node -> 5 * 5 -> 55 -25

	// one edge case is  1 -2 -1, where there is some factor that works with

	// if there is a exit, we need to check if nodes not in visited has a cycle

	// maybe need to count prefix sums.. ? idk 



	



}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}