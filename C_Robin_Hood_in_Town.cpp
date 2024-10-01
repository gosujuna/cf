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


bool check(vector<int>& a, int n, int x){
	int mx = *max_element(all(a));
	int total = accumulate(all(a), 0LL) + x;
	double avg = (double)total / n;
	int cnt = 0;
	for (int w : a){
		if (w < avg/2){
			cnt++;
		}
	}
	if ((mx + x >= avg / 2) && (mx < avg/2)){
		cnt--;
	}
	return cnt > (n/2);
}

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	int lo = 0, hi = 1e18;
	int ans = -1;

	while (lo < hi){
		int mid = lo + (hi - lo) / 2;
		if (check(a,n,mid)){
			ans = mid;
			hi = mid;
		} else{
			lo = mid + 1;
		}
	}
	if (lo == 1e18 && !check(a,n,lo)){
		ans = -1;
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