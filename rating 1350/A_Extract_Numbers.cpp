#include <bits/stdc++.h>



#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long

using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	 std::string s;
    std::cin >> s;
    
    int n = s.size();
    
    std::vector<std::string> words;
    for (int i = 0, j = -1; i <= n; i++) {
        if (i == n || s[i] == ',' || s[i] == ';') {
            words.push_back(s.substr(j+1, i-j-1));
            j = i;
        }
    }
    
    std::vector<std::string> ints, oths;
    for (auto s : words) {
        if (std::all_of(s.begin(), s.end(), isdigit) && !s.empty() && (s[0] != '0' || s.size() == 1)) {
            ints.push_back(s);
        } else {
            oths.push_back(s);
        }
    }
    
    for (auto v : {ints, oths}) {
        if (v.empty()) {
            std::cout << "-\n";
        } else {
            std::cout << "\"";
            for (int i = 0; i < v.size(); i++) {
                std::cout << v[i] << ",\""[i == v.size()-1];
            }
            std::cout << "\n";
        }
    }
	
}

signed main() {
	 
	 
		solve();
	 
}