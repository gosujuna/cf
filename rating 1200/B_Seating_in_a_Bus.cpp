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
		int z;
		cin >> z;
		z--;
		a[i] = z;
	}
	set<int> s;
	vector<bool> used(n);
	for (int i =0; i<n; i++){
		if (sz(s) == 0) {
			if (a[i] != 0){
				s.insert(a[i]-1);
			}
			if (a[i] != n-1){
				s.insert(a[i]+1);
			}
		} else{
			if (s.count(a[i]) == 1){
				s.erase(a[i]);
				if (a[i] != 0){
					s.insert(a[i]-1);
				}
				if (a[i] != n-1){
					s.insert(a[i]+1);
				}
			} else{
				cout << "NO" << endl;
				return;
			}
		}
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