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
	string s;
	cin >> s;
	int sq = 0;
	for (int i =1; i<=n/2; i++){
		if (i *i == n){
			sq = i;
			break;
		}
	}
	if (sq == 0){
		cout << "No" << endl;
		return;
	}
	bool ok = true;

	for (int j=0; j<sq; j++){
		if (s[j] != '1'){
			ok = false;
			break;
		}
		
	}
	for (int j=0; j<sq; j++){
		if (s[sq* (sq-1) + j] != '1'){
			ok = false;
			break;
		}
		
	}

	for (int i =1; i<sq-1; i++){
		for (int j =0; j<sq; j++){
			if (j== 0 || j == sq -1){
				if (s[i*(sq) + j] != '1'){
					ok = false;
					break;
				}
			} else{
				if (s[i*(sq) + j] != '0'){
					ok = false;
					break;
				}

			}
		}
	}

	cout << (ok ? "Yes" : "No") << endl;


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}