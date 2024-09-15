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
	int n,m;
	cin >> n >> m;
	vector<int> ans(m,1);
	vector<int> deg(n);
	vector<int> u(m), v(m);
	for (int i =0; i<m; i++){

		cin >> u[i] >> v[i];
		u[i]--;
		v[i]--;
		deg[u[i]]++;
		deg[v[i]]++;
	
	}
	for (int x=0; x<n; x++){
		if (deg[x] < n-1){
			cout << 2 << endl;
			for (int i =0; i<m; i++){
				cout << ((u[i] == x || v[i] == x)? 1 : 2) << " \n"[i==m-1];
			}
			return;
		}
	}


	cout << 3 << endl;
	for (int i =0; i<m; i++){
		int x;
		if (u[i] + v[i] == 1){
			x=1;
		} else if (u[i] == 0 || v[i] == 0){
			x=2;
		} else{
			x=3;
		}
		cout << x << " \n"[i==m-1];
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