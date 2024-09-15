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
	int a, b;
	cin >> a >> b;
	int sum = a + 2*b;
	if (a >= 2 && sum % 2 == 0){
		cout << "YES" << endl;
		return;
	}
	if (a ==0 && sum % 4 == 0){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}