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

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	
	int  m;
	cin >> m;
	for (int i =0; i<m; i++){
		map<char, int> char_to_num;
        map<int, char> num_to_char;
        string s;
        cin >> s;
        
        bool ok = true;
        if (s.size() != n) {
            ok = false;
        }
        
        if (ok) {
            for (int j = 0; j < n; j++) {
                char c = s[j];
                int num = a[j];
                
                if (char_to_num.count(c) == 0 && num_to_char.count(num) == 0) {
                    char_to_num[c] = num;
                    num_to_char[num] = c;
                } else if (char_to_num[c] != num || num_to_char[num] != c) {
                    ok = false;
                    break;
                }
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;

	}

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}