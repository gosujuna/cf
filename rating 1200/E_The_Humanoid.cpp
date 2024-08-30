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

void slv(){
	// looknice;
	int n, h;
	cin >> n >> h;
	vector<int> a(n);
	for ( auto& i:a){
		cin >> i;
	}
	sort(all(a));
	auto solve = [&](auto&& self, int i, int h, int s2, int s3) -> int {
		if (i == n){
			return 0;
		}
		if (a[i] < h){
			return self(self,i+1, h + (a[i] / 2), s2, s3) + 1;
		}
		int ans1 = (s2 ? self(self,i, h*2, s2-1, s3) : 0);
		int ans2 = (s3 ? self(self,i, h*3, s2, s3-1) : 0);
		return max(ans1,ans2);
	};

	cout << solve(solve,0,h, 2, 1) << endl;
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		slv();
	 }
}