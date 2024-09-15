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
	int n,m,k;
	cin >> n >> m >> k;
	int sp = n-1 + m-1;
	if (k < sp || (k - sp) % 2 == 1){
		cout << "NO" << endl;
		return;
	} 
	
	
	cout << "YES" << endl;
	

	vector right (n,vector<int>(m-1, 2));
	vector down (n-1, vector<int> (m,2));


	
	

	bool red = true;
	// do the cycle at the start
	if ((k - sp )% 4 == 0){
		// 1 square
		down[0][1] = 0;
		right[0][0] = 1;
		right[1][0] = 1;

	} else if ((k - sp) % 4 == 2 && k - sp > 2){
		down[0][2] = 1;
		right[0][0] = 1;
		right[1][0] = 1;

	} else{
		down[0][1] = 1;
	}
	// down
	for (int i =0; i<n-1; i++){

		if (down[i][0] == 2){
				if (red){
				down[i][0] = 0;
				red = false;
			} else{
				down[i][0] = 1;
				red = true;
			}

		}
		
	}
	//right
	for (int i =0; i<m-1; i++){
		if (right[n-1][i] == 2){
			if (red){
				right[n-1][i] = 0;
				red = false;
			} else{
				right[n-1][i] = 1;
				red = true;
			}
		}
		
	}
	
	

	for (int i =0; i<n; i++){
		for (int j = 0; j<m-1; j++){
			if (right[i][j] == 0){
				cout << "R ";
			} else if (right[i][j] == 1){
				cout << "B ";
			} else{
				cout << "R ";
			}
		}
		cout << endl;
	}

	for (int i =0; i<n-1; i++){
		for (int j = 0; j<m; j++){
			if (down[i][j] == 0){
				cout << "R ";
			} else if (down[i][j] == 1){
				cout << "B ";
			} else{
				cout << "R ";
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