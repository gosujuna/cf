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


void solve() {
    int n, k;
    cin >> n;
 
    vector dist(n, vector<int>(n));
    int total_sum = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
            if (i < j) total_sum += dist[i][j];
        }
    }
 
    cin >> k;
 
    while (k--) {
        int u, v, c;
        cin >> u >> v >> c;
        u--; v--;  
		
        
        if (c < dist[u][v]) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int new_dist = min(dist[i][j], dist[i][u] + c + dist[v][j]);
                    new_dist = min(new_dist, dist[i][v] + c + dist[u][j]);
                    
                    if (new_dist < dist[i][j]) {
                        if (i < j) total_sum -= dist[i][j] - new_dist;
                        dist[i][j] = dist[j][i] = new_dist;
                    }
                }
            }
        }
        
        cout << total_sum << " ";
    }
    cout << endl;
}
 

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}