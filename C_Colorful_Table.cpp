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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> l(k,n), r(k,-1);

	for (int i =0; i<n; i++){
		cin >> a[i];
		a[i]--;
		l[a[i]] = min(l[a[i]], i);
		r[a[i]] = i;
	}

	auto sl = l, sr = r;
	for (int i = k-2; i>=0; i--){
		sl[i] = min(sl[i], sl[i+1]);
		sr[i] = max(sr[i], sr[i+1]);
	}

	for (int i =0; i<k; i++){
		if (l[i] > r[i]){
			cout << 0;
		} else{
			cout << 2 * (sr[i] - sl[i] + 1);

		}
		cout << " \n"[i==k-1];
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