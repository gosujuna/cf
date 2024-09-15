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
    int n;
    cin >> n;
    vector<bool> visit(n, false);
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }

    string s;
    cin >> s;

    vector<vector<int>> sets;
    vector<int> F(n, 0);

    auto dfs = [&](auto&& self, int i, vector<int>& help) -> void {
        if (visit[i]) {
            return;
        }
        visit[i] = true;
        help.push_back(i);
        self(self, p[i], help);
    };

    for (int i = 0; i < n; i++) {
        if (!visit[i]) {
            vector<int> cycle;
            dfs(dfs, i, cycle);
            if (!cycle.empty()) {
                sets.push_back(cycle);
            }
        }
    }

    // Calculate F(i) for each element
    for (const auto& cycle : sets) {
        int cycle_size = cycle.size();
        vector<int> prefix_sum(cycle_size * 2 + 1, 0);
        
        // Calculate prefix sum of black elements
        for (int i = 0; i < cycle_size * 2; i++) {
            prefix_sum[i + 1] = prefix_sum[i] + (s[cycle[i % cycle_size]] == '0');
        }

        // Calculate F(i) for each element in the cycle
        for (int i = 0; i < cycle_size; i++) {
            F[cycle[i]] = prefix_sum[i + cycle_size] - prefix_sum[i];
        }
    }

    // Output F(i) for each i
    for (int i = 0; i < n; i++) {
        cout << F[i] << " ";
    }
    cout << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}