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
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	set<pair<int,int>> S;
	vector<int> nxt(n+1,n), lst(n+1,-1);

	for (int i = n-1; i>= 0; i--){
		nxt[i] = (s[i] == '1') ? i : nxt[i+1];
	}

	for (int i =0; i<n; i++){
		lst[i+1] = (s[i] == '0') ? i : lst[i];
	}

	while (m--){
		int l,r;
		cin >> l >> r;
		l--;
		l = nxt[l];
		r = lst[r];
		if ( l> r){
			l = r = -1;
		}
		S.emplace(l,r);
		// emplace used for pairs
	}

	cout << sz(S) << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}