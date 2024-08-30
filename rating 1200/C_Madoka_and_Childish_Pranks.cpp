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
	int count = 0;
	vector<string> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
		for (int j = 0; j<sz(a[i]); j++){
			if (a[i][j] == '1') count++;
		}
	}

	if (a[0][0] == '1'){
					cout << -1 << endl;
					return;
	}

	cout << count << endl;



	for (int i =n-1; i>=0; i--){
		for (int j = m-1; j>=0; j--){
			if (i == 0 && j == 0){
				
				continue;
			}
			if (a[i][j] == '1'){
				if (i == 0){
					cout << i+1 << " " << j << " " << i+1 << " " << j+1 << endl; 
				} else{
					cout << i << " " << j+1 << " " << i+1 << " " << j+1 << endl;
				}
			}
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