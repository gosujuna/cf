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
	int n;
	string s;
	cin >> n;
	cin >> s;
	int a=0;
	int b=0;
	int c=0;
	int d=0;

	for (int i =0; i<(4*n); i++){
		if (s[i] == 'A'){
			a++;
		}
		if (s[i] == 'B'){
			b++;
		}
		if (s[i] == 'C'){
			c++;
		}
		if (s[i] == 'D'){
			d++;
		}
	}

	cout << min(a,n) + min(b,n) + min(c,n) + min(d,n) << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}