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


void solve(){
	// looknice;
	string s;
	cin >> s;
	int n = s.size();

	int m;
	cin >> m;
	while (m--){
		int l,r,k;
		cin >> l >> r >> k;
		l--;
		k %= (r - l);

		rotate(s.begin() + l, s.begin() + r - k, s.begin() + r);
	}
	cout << s << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}