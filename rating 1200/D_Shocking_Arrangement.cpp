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
	bool zero = true;
	for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] != 0){
			zero = false;
		}
	}

	if (zero){
		cout << "NO" << endl;
		return;
	}
	vector<int> ans;

	cout << "YES" << endl;
	int s= 0, i=0, j=n-1;
	sort(all(a));

	while ( i<=j){
		if (s<=0){
			s += a[j];
			ans.push_back(a[j]);
			j--;
			
		} else{
			s += a[i];
			ans.push_back(a[i]);
			i++;
			
		}
	}

	for (int i =0; i<n; i++){
		cout << ans[i] << " \n"[i==n-1];
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