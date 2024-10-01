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
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	int sum = accumulate(all(a),0LL);
	bool ok = true;

	int need = sum / n ;
	if (sum % n){
		cout << "No" << endl;
		return;
	}

	vector<int> cnt(31,0);
	for (int i =0; i<n; i++){
		if (a[i] < need){
			int d = need - a[i];
			int l = __builtin_ctz(d);
			cnt[l]++;
			d += 1 << l;
			if (d & (d-1)){
				cout << "No" << endl;
				return;
			}
			cnt[__builtin_ctz(d)]--;
		} else if (a[i] > need){
			int d = a[i] - need;
			int l = __builtin_ctz(d);
			cnt[l]--;
			d += 1 << l;
			if (d & (d-1)){
				cout << "No" << endl;
				return;
			}
			cnt[__builtin_ctz(d)]++;
		}
	}
	for (int i =0; i<=30; i++){
		if (cnt[i]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
	return;
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}

//

//1 3 6