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

	int ans1 = 0;
	int ans2 = 0;
	int cnt = 0;

	for (int i =0; i<n; i+= 2){
		ans1 = max(a[i],ans1);
		cnt++;

	}
	ans1 += cnt;
	int cnt2 = 0;

	for (int i =1; i<n; i+= 2){
		cnt2++;
		ans2 = max(ans2, a[i]);

	}
	ans2 += cnt2;

	cout << max(ans1 , ans2) << endl;


	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}