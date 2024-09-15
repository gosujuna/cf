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
	int c = count(all(s), 'H');
	int ans = n;
	for (int i =0; i<n; i++){
		int cnt = count(s.begin(), s.begin() + c, 'T');
		ans = min(ans,cnt);
		rotate(s.begin(), s.begin()+1, s.end());
	}
	cout << ans << endl;

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}