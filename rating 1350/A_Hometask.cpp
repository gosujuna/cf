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
	int k;
	cin >> k;
	int n = s.size();
	
	bool forb[26][26] {};
	vector<int> mx(26);

	for (int i =0; i<k; i++){
		char x,y;
		cin >> x >> y;
		forb[x-'a'][y-'a'] = true;
		forb[y-'a'][x-'a'] =true;
	}

	for (int i = 0; i<n; i++){
		int f = 0;
		for (int j= 0 ; j<26; j++ ){
			if (!forb[s[i] - 'a'][j]){
				f = max ( f,mx[j] +1);
			}
		}
		mx[s[i] - 'a'] = f;
		
	}

	int ans = n - *max_element(all(mx));
	cout << ans << endl;


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
	 
	solve();
	 
}