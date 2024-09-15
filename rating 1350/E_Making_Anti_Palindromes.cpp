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
	string s;
	cin >> n;
	cin >> s;
	vector<int> cnt(26,0);
	for (int i =0; i<n; i++){
		cnt[s[i] - 'a']++;
	}
	if (n % 2 == 1 || *max_element(all(cnt) ) > n/2 ){
		cout << -1 << endl;
		return;
	}
	vector<int> cnt2(26,0);
	int tot = 0;
	

	for (int i =0; i<n/2; i++){
		if (s[i] == s[n-1-i]){
			cnt2[s[i] - 'a']++;
			tot++;
		}
	}
	int ans = max((tot+1)/2, *max_element(all(cnt2)));

	cout << ans << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}