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
	int l ,r , L , R;
	cin >> l >> r >> L >> R;
	
	if ((l > R) || (r < L)){
		cout << 1 << endl;
		return;
	}

	int seg1 = r-l;
	int seg2 = R-L;
	int ans = min(seg1, seg2);
	int help = min(R,r) - max(L,l);
	
	int z = 2;
	
	if (l == L){
		z--;
	}
	if (r== R){
		z--;
	}
	cout << help+z << endl; 
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}