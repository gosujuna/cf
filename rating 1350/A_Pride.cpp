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
	int ans = n+1;
	int ok = false;

	int cnt = 0;
	for (int i =0; i<n; i++){
		cin >> a[i];
		if (a[i] == 1){
			cnt++;
			
		}
	}

	
	
	for (int i =0; i<n; i++){
		int g = 0;
		for (int j =i; j<n; j++){
			g = gcd(g,a[j]);
			if (g == 1){
				ans = min(ans,j-i);
				break;
			}

		}
		
	}
	if (ans > n){
		cout << -1 << endl;
		return;
	}
	if (cnt > 0){
		ans = n- cnt;
	} else{
		ans += n-1;
	}

	cout << ans << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}