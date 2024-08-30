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
	int n,k;
	cin >> n >> k;
	int x=0;

	while ((x+1) * (x+2) /2 <= k){
		x+=1;
	}

	vector<int> a(n);

	for (int  i=0; i<n; i++){
		if (i < x){
			a[i]=2;
		} else if (i==x){
			a[i] = (-2*x) - 1 + 2*(k - (x)* (x+1)/2);
		} else{
			a[i] = -1000;
		}
		cout << a[i] << " \n"[i==n-1];
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

