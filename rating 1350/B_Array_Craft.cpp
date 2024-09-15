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
	int n, x, y;
	cin >> n >> x >> y;
	x--;
	y--;
	vector<int> a(n, 1); 
    for (int i = y; i <= x; i++) {
        a[i] = 1;
    }
    // Output the array
	int cnt=0;
	for (int i = y-1; i>=0; i--){
		cnt++;
		if (cnt % 2 == 1){
			a[i] = -1;
		}
	}
	cnt = 0;
	for (int i = x+1; i< n; i++){
		cnt++;
		if (cnt % 2){
			a[i] = -1;
		}
	}
 
    for (auto i : a) {
        cout << i << " ";
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