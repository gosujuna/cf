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

	int n;
	cin >> n;
	
	vector<int> l(n), r(n);

	for (int i = 0; i<n; i++){
		cin >> l[i] >> r[i];
	}

	vector<int> ord(n);
	iota(ord.begin(), ord.end(), 0);
	sort(ord.begin(), ord.end(), [&](int i, int j){
		return l[i] < l[j];
	});
	vector<int> ans;

	for (int i = 0; i<n; i++){
		int x = 0;
		bool ok = true;
		for (int j = 0; j<n; j++){
			if (i != j){
				if (x > l[ord[j]]){
					ok = false;
					break;
				}
				x = r[ord[j]];
			}
		}
		if (ok){
			ans.push_back(ord[i]);
		}
	}

	sort(all(ans));

	cout << sz(ans) << endl;
	for (auto a : ans){
		cout << a +1 << " ";
	}
	cout << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}