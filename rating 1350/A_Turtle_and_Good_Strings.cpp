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

int solve(vector<string> grid, int row_start, int column_start, int row_end, int column_end) {
    const int INF = 1e6;
    const vector<int> dx = {0, 1, 0, -1};
    const vector<int> dy = {1, 0, -1, 0};
    const vector<int> cost = {0, 0, 1, 1};

    int n = grid.size();
    int m = grid[0].size();
    
    // Parse the input grid
    vector<vector<int>> parsed_grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            parsed_grid[i][j] = (grid[i][j] == 'x') ? INF : 0;
        }
    }
    
    vector<vector<int>> distance(n, vector<int>(m, INF));
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    distance[row_start][column_start] = 0;
    pq.push({0, {row_start, column_start}});
    
    while (!pq.empty()) {
        int dist = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (x == row_end && y == column_end) {
            return dist;
        }
        
        if (dist > distance[x][y]) continue;
        
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                int new_dist = dist + cost[i] + parsed_grid[nx][ny];
                
                if (new_dist < distance[nx][ny]) {
                    distance[nx][ny] = new_dist;
                    pq.push({new_dist, {nx, ny}});
                }
            }
        }
    }
    
    return -1;  // No path found
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 vector<string> grid1 = {
        "----",
        "--x-",
        "----",
        "---x"
    };
    cout << "Test case 1 result: " << solve(grid1, 0, 0, 3, 2) << endl;  // Expected output: 3

    // Test case 2: No path possible
    vector<string> grid2 = {
        "----",
        "--xx",
        "-xx-",
        "---x"
    };
    cout << "Test case 2 result: " << solve(grid2, 0, 0, 3, 3) << endl;  // Expected output: -1

    // Test case 3: Path with different costs
    vector<string> grid3 = {
        "-----",
        "xxxx-",
        "-----",
        "----x",
        "-----"
    };
    cout << "Test case 3 result: " << solve(grid3, 0, 0, 3, 0) << endl;  // Expected output: 4

    return 0;
}