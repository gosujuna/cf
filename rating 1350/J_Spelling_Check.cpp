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
    string s, cor;
    cin >> s >> cor;
    int n = s.length();
    int m = cor.length();
    vector<int> a;
    
    if (n != m + 1) {
        cout << "0\n" << endl;
        return;
    }

    int i = 0;
    while (i < m && s[i] == cor[i]) {
        i++;
    }

    // Check if removing the character at position i makes s equal to cor
    bool match = true;
    for (int j = i; j < m; j++) {
        if (s[j+1] != cor[j]) {
            match = false;
            break;
        }
    }

    if (match) {
        char ans = s[i];
        int start = i;
        // Find all consecutive characters equal to ans, including previous positions
        while (i > 0 && s[i-1] == ans) {
            i--;
        }
        while (i < n && s[i] == ans) {
            a.push_back(i + 1);  // +1 because 1-indexed
            i++;
        }
    }

    // Output results
    cout << a.size() << endl;
    for (int pos : a) {
        cout << pos << " ";
    }
    cout << endl;
}
signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}