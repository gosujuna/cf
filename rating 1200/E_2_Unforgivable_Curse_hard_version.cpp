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
	int n,k;
	cin >> n>> k;
	string s,t;
	cin >> s >> t;
	vector<int> count(26);

	for (int i =0; i<n; i++){
		if (i-k < 0 && i+k >= n){
			if (s[i] != t[i]){
				cout << "NO" << endl;
				return;
			}
		} else{
			count[s[i] - 'a'] += 1;
			count[t[i] - 'a'] -= 1;
		}
	}

	for (int i =0; i<26; i++){
		if (count[i] != 0){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}