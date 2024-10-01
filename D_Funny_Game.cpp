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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	DSU dsu(n);
	vector<int> u(n), v(n);

	for (int x = n-1; x>=1; x--){
		vector<int> b(x,-1);
		for (int i = 0; i<n; i++){
			if (dsu.find(i) != i){
				continue;
			}
			if (b[a[i] % x ] != -1){
				u[x] = b[a[i] % x];
				v[x] = i;
				dsu.merge(u[x],v[x]);
				break;
			}
			b[a[i] % x ] = i;
		}
	}
	cout << "YES" << endl;
	for (int i = 1; i<n; i++){
		cout << u[i] + 1 << " " << v[i] + 1 << endl;
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