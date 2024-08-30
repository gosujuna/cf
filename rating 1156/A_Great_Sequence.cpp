#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
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
	int n, x;
	cin >> n >> x;
	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}

	sort(all(a));

	//vector<bool> used(n);
	vector<bool> vis(n);
        int j = 0, q = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (vis[i])
                continue;
            if (a[i] * x > a[j]) {
                while (a[i] * x >= a[j] && j < n)
                    q = ++j;
                q = --j;
            }
            if (i < q && a[i] * x == a[q])
                vis[q--] = 1;
            else
                ans++;
        }	
	cout << ans << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}