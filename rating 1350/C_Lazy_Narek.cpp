#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

using str = string;
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const vector<char> target = {'n', 'a', 'r', 'e', 'k'};
const int INF = 1e9;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    
    vector<vector<int>> dp(n + 1, vector<int>(5, -INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            if (dp[i][j] == -INF) continue;

            
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            int current_j = j;
            int narek_score = 0;
            int chatgpt_score = 0;

            
            for (char c : strings[i]) {
                if (find(all(target), c) != target.end()) {
                    chatgpt_score++;
                }
                if (c == target[current_j]) {
                    current_j++;
                    if (current_j == 5) {
                        narek_score += 5;
                        current_j = 0;
                    }
                }
            }

            int score_diff = narek_score - (chatgpt_score - narek_score);
            dp[i + 1][current_j] = max(dp[i + 1][current_j], dp[i][j] + score_diff);
        }
    }
	debug(dp);

    int max_score = *max_element(all(dp[n]));
    cout << max_score << endl;
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}