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
	DSU dsu(n);
	vector<pair<int,int>> exist;
	vector<pair<int,int>> add;

	for (int i =0; i<n-1; i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		if (!dsu.merge(a,b)){
			exist.emplace_back(a,b);
		}
		
	}

	for (int i =0; i<n; i++){
		if (dsu.merge(0,i)){
			add.emplace_back(0,i);
		}
	}

	cout << sz(add) << endl;
	for (int i =0; i<sz(add); i++){
		cout << exist[i].first +1 << " " << exist[i].second +1 << " " << add[i].first+1 << " " << add[i].second+1 << endl;
 	}
	

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}