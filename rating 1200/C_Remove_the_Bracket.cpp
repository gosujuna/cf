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
	int n,s;
	cin >> n >> s;
	vector<int> x(n+1);
	vector<int> y(n+1);
	int j;
	vector<vector<int>> f(n+1, vector<int>(2));
	for (int i =1; i<=n; i++){
		cin >> j;
		if (i==1 || i==n){
			x[i]=j;
			y[i] = j;
		} else if (j <= s){
			x[i] = j;
			y[i] = 0;
		} else{
			x[i] = s;
			y[i] = j-s;
		}
	}
	f[1][0] = 0, f[1][1] = 0;
	for (int i = 2; i<= n; i++){
		f[i][0] = min(f[i-1][0] + y[i-1]*x[i], f[i-1][1] + x[i-1]*x[i]);
		f[i][1] = min(f[i-1][0] + y[i-1]* y[i], f[i-1][1] + x[i-1]*y[i]);
		
	}
	cout << f[n][1] << endl;



	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}