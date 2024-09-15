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
	int n;
	cin >> n;
	int a=0, b=0, c=0;
	for (int i =0; i<n; i++){
		int z;
		cin >> z;
		if (z % 3 == 0){
			a++;
		} else if (z % 3 == 1){
			b++;
		} else{
			c++;
		}
	}
	int ans = 0;
	ans += a/2;
	ans += min(b,c);
	cout << ans << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
		solve();
	
}