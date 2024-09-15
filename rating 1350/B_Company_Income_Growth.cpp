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
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	map<int,int> mp;
	int cnt = 1;
	for (int i =0; i<n; i++){
		if (mp.count(cnt) == 0 && a[i] == cnt){
			mp[cnt] = i + 2001;
			cnt++;
		}
	}

	cout << cnt -1 << endl;
	for (auto [key, value] : mp){
		cout << value << " ";
	}
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 solve();
}