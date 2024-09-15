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


void solve(){
	// looknice;
	int x,y,k;
	cin >> x >> y >> k;
	int x1 = x/k + (x % k >0);
	int y1 = y/k + (y % k > 0);

	if (x1> y1){
		cout << (x1*2 -1) << endl;
	} else{
		cout << (2*y1) << endl;
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