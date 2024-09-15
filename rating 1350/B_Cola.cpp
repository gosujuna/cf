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
	

	
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int ans =0;
	for (int i =0; i<=a/2; i++){
		for (int j =0; j<=b; j++){
			int cand = n - j - i;
			if (cand % 2 == 0 && (cand /2 >= 0  && cand / 2 <= c)){
				ans++;
			}

		}
	}
	cout << ans << endl;
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}