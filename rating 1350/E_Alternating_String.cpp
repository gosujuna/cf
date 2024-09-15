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
	int n; cin >> n;
	string s; cin >> s;
	vector<vector<int>> even(n+1,vector<int>(26,0)), odd = even;

	for (int i =0; i<n; i++){
		for (int j =0; j<26; j++){
			odd[i+1][j] = odd[i][j];
			even[i+1][j] = even[i][j];
		
		}
		if (i % 2 == 0){
			even[i+1][s[i] - 'a']++;
		} else{
			odd[i+1][s[i] - 'a']++;
		}
	}
	if (n % 2 == 0){
		int a = 0, b = 0;
		for (int i =0; i<26; i++){
			a = max(a, even[n][i]);
			b = max(b,odd[n][i]);
		}
		cout << n - a - b << endl;
	} else{
		int ans = 1e9;
		for (int i =0; i<n; i++){
			int a = 0, b=0;
			for (int j =0; j<26; j++){
				a = max(a,odd[n][j] - odd[i+1][j] + even[i][j]);
				b = max(b,even[n][j] - even[i+1][j] + odd[i][j]);
			}
			ans = min(ans, n-a-b);
		}
		cout << ans << endl;
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