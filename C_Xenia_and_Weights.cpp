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
	string s;
	cin >> s;
	
	int m;
	cin >> m;
	
	vector dp(m+1, vector(11,vector<int>(10,-1)));
	dp[0][0][0] = 0;
	dp[0][0][1] = 0;
	
	for (int i =0; i<m; i++){
		for (int j =0; j<=10; j++){
			for (int x = 0; x<10; x++){
				for (int y = 0; y<10; y++){
					if (x != y && s[y] == '1' && y + 1 - j > 0 && dp[i][j][x] != -1){
						dp[i+1][y+1-j][y] = x;
					}
				}
			}
		}
	}

	


	for (int j = 0; j<=10; j++){
		for (int x = 0; x<10; x++){
			if (dp[m][j][x] != -1){
				cout << "YES" << endl;
				vector<int> ans;
				for (int i =m; i>0; i--){
					ans.push_back(x+1);
					int y = dp[i][j][x];
					j = x + 1 - j;
					x = y;
				}
				reverse(all(ans));
				
				for (auto z :ans){
					cout << z << " ";
				}
				cout << endl;
				return;
			}
		}
	}

	cout << "NO" << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
		solve();
	 
}