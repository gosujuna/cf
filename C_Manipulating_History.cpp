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

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> cnt(26);
	for (int i =0; i<(2*n) + 1; i++){
		string s;
		cin >> s;
		for (auto c : s){
			cnt[c - 'a']++;
		}
	}

	for (int i =0; i<26; i++){
		if (cnt[i] % 2){
			char c = i + 'a';
			cout << c << endl;
			return;
		}
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