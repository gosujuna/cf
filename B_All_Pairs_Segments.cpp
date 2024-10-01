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
	int n, q;
	cin >> n >> q;

	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	map<int,int> mp;

	for (int i =0; i<n; i++){
		int cur = a[i];
		int help = n - i - 1;
		if (i != n-1){
			int diff = a[i+1] - a[i] -1;
			mp[(i+1) * (help)] += diff;
		}
		
		

		mp[(n - i) * (i+1) -1 ] += 1;
		
		
		//


	}


	while (q--){
		int x;
		cin >> x;
		if (mp.count(x) == 0){
			cout << 0 << " ";
		} else{
			cout << mp[x] << " ";
		}
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