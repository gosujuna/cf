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
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	vector<int> b;
	for (int i =0; i<n; i+=4){
		if (i+4 <= n){
			int sum = a[i] + a[i+1] + a[i+2] + a[i+3];
			if (sum >= 2){
				b.push_back(1);
				b.push_back(1);
			} else{
				b.push_back(0);
				b.push_back(0);
			}
		} else{
			if (a[i] + a[i+1] == 2){
				b.push_back(1);
				b.push_back(1);
			} else{
				b.push_back(0);
				
			}
		}
	}
	cout << sz(b) << endl;
	for (int i =0; i<sz(b); i++){
		cout << b[i] << " ";
	}
	cout << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}