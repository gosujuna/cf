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
	vector<string> a(n);

	for (int i =0; i<n; i++){
		cin >> a[i];
	}

	for (int i =n-1; i>=0; i--){
		for (int j=0; j<4; j++){
			if (a[i][j] == '#'){
				cout << j+1 << " ";
			}
		}
		
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