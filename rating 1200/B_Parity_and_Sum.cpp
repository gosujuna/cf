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
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n);
	bool alleven = true;
	vector<int> odd;
	vector<int> even;
	int mxodd = 0;
	int mxmin = 0;
	for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] % 2 != 0){
			alleven = false;
			odd.push_back(a[i]);
			mxodd = max(mxodd,a[i]);
		} else{
			even.push_back(a[i]);
			mxmin = max(mxmin, a[i]);
		}

	}
	if (alleven){
		cout << 0 << endl;
		return;
	}
	int ans = 0;

	sort(all(even));
	
	

	for (int i =0; i<sz(even); i++){
		if (even[i] < mxodd){
			ans++;
			mxodd += (even[i]);
		} else{
			ans+= 2;
			mxodd += mxmin;
			
		}
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