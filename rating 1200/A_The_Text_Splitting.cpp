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
	 int n,p,q;
	 cin >> n >> p >> q;
	 string s;
	 cin >> s;

	 for (int i =0; i*p <= n; i++){
		if ((n-i*p) % q == 0){
			cout << i + (n - i*p) / q << endl;
			int j = 0;
		while (j < i*p){
			cout << s.substr(j,p) <<endl;
			j += p;
		}
		while (j<n){
			cout << s.substr(j,q) << endl;
			j+= q;
		}
		return 0;
		}
		
	 }

	 cout << -1 << endl;


}