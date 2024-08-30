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
	vector<int> s(n);
	for (int i =0; i<n; i++){
		cin >> s[i];
	}

	

	sort(all(s));
	int mx = 0;
	

	for (int i =0; i<sz(s); i++){
		if (s[i] == i){
			mx++;
		}
		else{
			break;
		}
	}
	
	while (true){
		cout << mx << endl;
		int y;
		cin >> y;
		if (y == -1){
			break;
		}
		mx = y;
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