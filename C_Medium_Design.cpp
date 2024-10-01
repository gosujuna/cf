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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)

void solve(){
	// looknice;
	int n,m;
	cin >> n >> m;

	vector<int> l(n), r(n);
	for (int i =0; i<n; i++){
		cin >> l[i] >> r[i];
		l[i] -= 1;
	}

	vector<pair<int,int>> f;
	for (int i =0; i<n; i++){
		if (l[i] != 0){
			f.emplace_back(l[i], 1);
			f.emplace_back(r[i], -1);
		}
	}
	int ans =0 ;
	int cur =0;
	int lst = 0;
	sort(all(f));
	for (auto [x,y] : f){
		if (x > lst){
			ans = max(ans,cur);
		}
		cur += y;
		lst = x;
	}

	if (m > lst){
		ans = max(ans,cur);
	}

	f.clear();

	for (int i =0; i<n; i++){
		if (r[i] != m){
			f.emplace_back(l[i], 1);
			f.emplace_back(r[i],-1);
		}
	}
	cur = 0;
	lst = 0;
	sort(all(f));
	for (auto [x,y] : f){
		if (x > lst){
			ans = max(ans,cur);
		}
		cur += y;
		lst = x;
	}
	if (m > lst){
		ans = max(ans,cur);
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