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
	ll n,m;
	cin >> n >> m;
	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}
	
	
	map<ll,ll> mp;
	vector<ll> c(n);
	
	for (int i = 0; i < n; i++) {
      // cin >> c[i];
      c[i] = 1;
      mp[a[i]] += c[i];
    }

	ll ans = 0;
    for (auto& [k, v0] : mp) {
      auto it = mp.find(k + 1);
      auto v1 = (it != mp.end() ? it->second : 0);
	  for (int64_t x = 0; x <= v0; x++) {
    if (x * k <= m) {
      auto y = min((m - x * k) / (k + 1), v1);
      ans = max(ans, x * k + y * (k + 1));
    } else {
      break;
    }
  }
      
      
    }
	cout << ans << endl;
	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}