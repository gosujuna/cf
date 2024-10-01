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
int cnt = 0;
void solve(){
	cnt++;
	// looknice;
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	int ans = 0;
	

	ans += (2*n -3) *a[0];
	if (n == 1){
		ans = a[0];
	}
	
	if (ans <= k){
		cout << "Case #" << cnt << ": " << "YES" << endl;
	} else{
		cout << "Case #" << cnt << ": " << "NO" << endl;
	}
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}