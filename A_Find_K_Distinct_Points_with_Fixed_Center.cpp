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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int x,y,k;
	cin >> x >> y >> k;

	if (k % 2 == 1){
		cout << x << " " << y << endl;
		for (int i = 1; i<= (k-1)/2; i++){
			cout << x+i << " " << y+i << endl;
			cout << x-i << " " << y-i << endl;
		}
	} else{
		for (int i = 1; i<= k/2; i++){
			cout << x+i << " " << y+i << endl;
			cout << x-i << " " << y-i << endl;
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