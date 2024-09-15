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
	int n =s.size();
	int cost = 1e12;
	int cost2 = 1e12 + 1;
	int cnt0 = 0;
	int cnt1 = count(s.begin(), s.end(), '1');
	int ans = 1e18;
	if (n==1){
		ans = 0;
	}
	for (int i =0; i<n-1; i++){
		cnt0 += s[i] == '0';
		cnt1 -= s[i] == '1';
		int k = cnt0 + cnt1 + (s[i] == '1') + (s[i+1] == '0');
		int cur = (n-k) * (cost2);
		if (s[i] > s[i+1]){
			cur += cost;
		}
		ans = min(ans,cur);
	}
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