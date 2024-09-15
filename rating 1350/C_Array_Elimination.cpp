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

int solve(vector<vector<int>> arr&){
	// looknice;
	map<int,int> mp;

	int mxlight = 0;
	int cur =0;
	int ans = 0;

	for (auto [pos,change] : mp){
		cur = cur + change;
		if (cur > mxlight){
			ans = pos;
			mxlight = cur;
		}
	}

	return ans;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}