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
	int a , b;
	int c;
	cin >> a >> b >> c;
	int v = a;

	for (int i =0; i<b; i++){
		v *= 10;
		if (v/b == c){
			cout << i+1 << endl;
			return;
		}
		v%= b;
	}
	cout << -1 << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}