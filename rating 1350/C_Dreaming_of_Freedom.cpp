#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif
 
 
using ll = long long;

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
 
	for (int x = 1; x * x <= n; x++){
		if (n%x == 0){
			if (x >1 && x<= m){
				cout << "NO" << endl;
				return;
			}
		}
	}
 
		if (n > 1&& n<=m) {
			cout << "NO" << endl;
			return;
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