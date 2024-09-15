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
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	
	for (int i =0; i<n; i++){
		cin >> a[i];

	}
	
	sort(all(a));
	int ans = a.back();

	for (int i =0; i<m; i++){
		string s;
		cin >> s;
		
		int l,r;
		cin >> l >> r;
		
		if (s == "+" && r >= ans && l <= ans){
			ans++;
		} 
		if (s == "-" && r >= ans && l<= ans){
			ans--;
		}

		
		cout << ans << " ";
		
		
		
	
	}

	
	cout << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}