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
	int n,m,v;
	cin >> n >> m >> v;

	int mx = (n-2) * (n-1) / 2;
	mx++;
	if (mx < m || m < n-1){
		cout << -1 << endl;
		return;
	}

	v--;
	for (int i =0; i<n; i++){
		if (v != i){
			cout << v+1 << " " << i+1 << endl;
		}
	}

	int cnt = m-(n-1);
	if (cnt == 0){
		return;
	}
	int exclude = v+1;
	if (v == n-1){
		exclude = 1;
	}

	for (int i = 0; i<n; i++){
		for (int j = i+1; j< n; j++){
			if (i != v && j != v && i != j && i != exclude && j != exclude){
				cout << i+1 << " " << j+1 << endl;
				cnt--;
				if (cnt == 0){
					return;
				}
			}
		}
	}



	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
		solve();
	 
}