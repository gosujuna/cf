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

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
	int m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
		m = max(m,a[i]);
    }
    
    int s, t;
    cin >> s >> t;
    s--; t--; 
	vector<int> minp(m+1), primes;
    
    for (int i = 2; i <= m; i++) {
        if (minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
        }
        
        for (auto p : primes) {
            if (i * p > m) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                break;
            }
        }
    }

	
    
    

	

	vector<vector<int>> f(m+1);

	for (int i =0; i<n; i++){
		for (int x = a[i]; x>1; x /= minp[x]){
			f[minp[x]].push_back(i);
		}
	}

	vector<int> dis(n+m+1, -1);
	vector<int> prev(n+m+1);
	queue<tuple<int,int,int>> q;
	q.emplace(s,0,-1);

	while (!q.empty()){
		auto [u,d,p] = q.front();
		q.pop();
		if (dis[u] != -1){
			continue;
		}
		dis[u] = d;
		prev[u] = p;
		if (u < n){
			for (int x = a[u]; x>1; x/= minp[x]){
				q.emplace(n+minp[x], d+1, u);
			}
		} else{
			for (auto x : f[u-n]){
				q.emplace(x,d+1, u);
			}
		}
	}

	if (dis[t] == -1) {
        std::cout << -1 << "\n";
        return;
    }

    
    vector<int> path;
	for (int v = t; v != -1; v = prev[v]) {
		if (v < n){
			path.push_back(v);
		}
	}
    reverse(path.begin(), path.end());

    cout << path.size() << endl;
	for (int p : path) {
		cout << p + 1 << " ";
	}
	cout << endl;
    
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
		solve();
	
}