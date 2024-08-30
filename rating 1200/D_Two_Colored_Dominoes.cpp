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
	vector<string> s(n);

	for (int i =0; i<n; i++){
		cin >> s[i];
	}
	bool fail = false;
	for (int i =0; i<n-1; i++){
		vector<int> pos;
		for (int j =0; j<m; j++){
			if (s[i][j] == 'U'){
				pos.push_back(j);
			}
		}
		if (pos.size() % 2 == 1){
			fail = true;
			break;
		}
		for (int id = 0; id < sz(pos); id++){
			int j = pos[id];
			if (id % 2 == 0){
				s[i][j] = 'W';
				s[i+1][j] = 'B';
			} else{
				s[i][j]  = 'B';
				s[i+1][j]  = 'W';
			}
		}
	}
	

	for (int j =0; j<m-1; j++){
		vector<int> pos;
		for (int i =0; i<n; i++){
			if (s[i][j] == 'L'){
				pos.push_back(i);
			}
		}
		if (sz(pos) % 2 == 1){
			fail = true;
			break;
		}

		for (int id = 0; id<sz(pos); id++){
			int i = pos[id];
			if (id % 2 == 0){
				s[i][j] = 'W';
				s[i][j+1] = 'B';
			} else{
				s[i][j] = 'B';
				s[i][j+1] = 'W';
			}
		}
	}

	if (fail) {
		cout << -1 << endl;
	} else{
		for (int i =0; i<n; i++){
			cout << s[i] << endl;
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