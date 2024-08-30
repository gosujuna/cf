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
	int n,k;
	cin >> n >> k;
	vector<int> a;
	vector<int> b;
	for (int i =0; i<n; i++){
		int z;
		cin >> z;
		if (z < 0){
			b.push_back(-z);
		}
		if (z > 0){
			a.push_back(z);
		}

	}
	sort(b.rbegin(), b.rend());
	sort(a.rbegin(), a.rend());

	int ans =0;
	int mx = 0;

	for (int i =0; i<b.size(); i++){
		ans += 2*b[i];
		mx = max(mx,b[i]);
		if ( i + k >= b.size()){
			break;
		} else{

			i += k-1;

		}

	}

	for (int i =0; i<a.size(); i++){
		ans += 2*a[i];
		mx = max(mx,a[i]);
		if ( i + k >= a.size()){
			break;
		} else{
			
			i += k-1;

		}

	}
	ans -= mx;
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