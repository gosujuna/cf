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
	
}



signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 string a,b;
	 cin >> a >> b;
	 int n = sz(a);
	 int m = sz(b);
	 if (n != m){
		cout << "NO" << endl;
	 } else{
		bool ok = false;
		bool ok1 = false;
		bool ok2 = false;

		for (int i =0; i<n; i++){
			if (a[i] == '1'){
				ok1 = true;
			}
			if (b[i] == '1'){
				ok2 = true;
			}
		}
		ok = ok1 && ok2;

		if (a == b){
			ok = true;
		}
		cout << (ok ? "YES" : "NO") << endl;
	 }

}