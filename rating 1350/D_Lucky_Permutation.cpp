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


void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> p(n);
	
	int cnt = 0;
	for (int i =0; i<n; i++){
		cin >> p[i];
		p[i]--;
		
	}
	std::vector<int> vis(n, -1);
    int ans = n;
    int sameAdj = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i] != -1) continue;
        
        ans--;
        int j = i;
        while (vis[j] == -1) {
            vis[j] = i;
            j = p[j];
        }
    }

	for (int i = 1; i < n; i++) {
        if (vis[i] == vis[i - 1]) {
            sameAdj = 1;
        }
    }
	
	std::cout << ans + (sameAdj ? -1 : 1) << "\n";
	



	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}