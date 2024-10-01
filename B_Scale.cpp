#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int n,k;
	cin >> n >> k;

	vector<string> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	
	int s = n/k;
	
	
	

	vector<vector<int>> b(s,vector<int>(s,0));
	

	for (int i =0; i<s; i++){
		for (int j =0; j<s; j++){
			if (a[i*k][j*k] == '0'){
				b[i][j] = 0;
				cout << b[i][j];
			} else{
				b[i][j] = 1;
				cout << b[i][j];
			}
			
			
			
		}
		cout << endl;
		
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