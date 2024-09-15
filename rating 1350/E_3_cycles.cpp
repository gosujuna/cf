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
	if (n==1){
		cout << 0 << endl;
		return;
	}
	if (n==2){
		cout << 1 << endl;
		cout << 1 << " " << 2 << endl;
		return;
}
	if (n==3){
		cout << 2 << endl;
		cout << 1 << " " << 2 << endl;
		cout << 2 << " " << 3 << endl;
		return;
	}

	if (n == 4){
		cout << 4 << endl;
	cout << 1 << " " << 2 << endl;
	cout << 2 << " " << 3 << endl;
	cout << 3 << " " << 4 << endl;
	cout << 4 << " " << 1 << endl;
	return;
	}

	if (n % 2 ==1){
		cout << n/2 * ((n/2) + 1) << endl;
		for (int i =1; i<= n/2; i++){
			for (int j = 1 + (n/2); j <=n; j++){
				cout << i << " " << j << endl;
			}
		}
	} else{
		cout << (n/2) * (n/2) << endl;
		for (int i =1; i<= n/2; i++){
			for (int j = 1 + (n/2); j <=n; j++){
				cout << i << " " << j << endl;
			}
		}
	}


	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}