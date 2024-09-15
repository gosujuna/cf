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
	int n,x,y;
	cin >> n >> x >> y;
	int d = x -y;
	int c = (y- (n-1));
	int e = c*c;
	
	if ((e+n-1) < x){
		cout << -1 << endl;
	} else{
		if (c > 0){
			cout << c << endl;
			for (int i = 0; i<n-1; i++){
				cout << 1 << endl;
			}

		} else{
			cout << -1 << endl;
		}
		
	}
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}