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
	int n, m, q;
	cin >> n >> m >> q;
	string s;
	cin >> s;
	DSU dsu(n + 1);
	vector<int> p;
	for (int i =0; i<m; i++){
		int l, r;
		cin >> l >> r;
		l--;
		for (int j = dsu.find(l); j < r; j = dsu.find(j)){
			p.push_back(j);
			dsu.merge(j+1,j);
		}

	}
	debug(p);

	vector<int> invp(n, -1);
	for (int i =0; i< p.size(); i++){
		invp[p[i]] = i;

	}
	int tot = p.size();
	int cnt = count(all(s), '1');
	int ans = 0;
	for (int i =0; i< min(cnt,tot); i++){
		ans += (s[p[i]] == '0');
	}

	while (q--){
		int x;
		cin >> x;
		x--;
		if (s[x] == '1'){
			cnt--;
			ans -= (cnt < tot && s[p[cnt]] == '0');
			s[x] = '0';
			ans += (invp[x] != -1 && invp[x] < cnt); 
		} else{
			ans -= (invp[x] != -1 && invp[x] < cnt);
			s[x] = '1';
			ans += (cnt < tot && s[p[cnt]] == '0');
			cnt++;
		}
		cout << ans << endl;
	}

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}