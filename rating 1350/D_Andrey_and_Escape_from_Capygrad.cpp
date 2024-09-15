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
	vector seg(n,vector<int>(2));
	for (int i =0; i<n; i++){
		int l,r,a,b;
		cin >> l >> r >> a >> b;
		seg[i] = {l,b};
		

	}
	sort(all(seg));
	vector a(0,vector<int>(2));

	for (auto& s : seg){
		if (!a.empty() && s[0] <= a.back()[1]){
			a.back()[1] = max(a.back()[1], s[1]);
		} else{
			a.push_back(s);
		}
	}
	debug(a);
	int q;
	cin >> q;
	while (q--){
		int x;
		cin >> x;
		int j = lower_bound(all(a), vector<int>{x+1,0}) - a.begin() - 1;
		if (j >=0){
			x = max(x,a[j][1]);
		}

		cout << x << " ";
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