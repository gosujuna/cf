#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	string s;
	cin >> s;
	int n = sz(s);
	int ans = n;
	vector<vector<int>> p(26,vector<int>(0));

	for (int i =0; i<26; i++){
		p[i].push_back(-1);
	}
	for (int i =0; i<n; i++){
		p[s[i] - 'a'].push_back(i);
	}
	for (int i =0; i<26; i++){
		p[i].push_back(n);
	}

	
	for (int i =0; i<26; i++){
		int res =0;
		for (int j=1; j<p[i].size(); j++){
			res = max(res,p[i][j] - p[i][j-1]);
		}
		ans = min(ans,res);
	}
	cout << ans << endl;
}