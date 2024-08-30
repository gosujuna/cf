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
#define sz(v) ((long long)(v).size())
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
	int n, m;
	cin >> n >> m;
	vector<int> a;
	
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i =0; i<n; i++){
		int x;
		cin >> x;
		if (x == -1) {
            cnt1++;
        } else if (x == -2) {
            cnt2++;
        } else {
            a.push_back(x);
        }
	}

	std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());

	int ans = 0;
    ans = std::max(ans, cnt1 + i64(a.size()));
    ans = std::max(ans, cnt2 + i64(a.size()));
    ans = std::min(ans, m);

	for (int i = 0; i < a.size(); i++) {
        int l = std::min(a[i] - 1, i + cnt1);
        int r = std::min(m - a[i], i64(a.size()) - 1 - i + cnt2);
        ans = std::max(ans, l + 1 + r);
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