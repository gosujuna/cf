#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


//using ll = long long;

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
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}
	
	
	map<int,int> mp;
	vector<int> c(n);
	
	for (int i = 0; i < n; i++) {
       cin >> c[i];
      
      mp[a[i]] += c[i];
    }

	int ans = 0;

	for (auto& [k,v0]: mp){
		auto it = mp.find(k+1);
		auto v1 = (it != mp.end() ? it->second : 0); // value of number of k+1 flowers
		auto x = min(v0, m/k);
		auto y = min(v1, (m-x*k)/ (k+1));
		auto add = min({x,v1-y, (m-x*k) % (k+1)}); // x current value of v1 flowers, y current value of v2 flowers, so v2 flowers additional, and 
		ans = max(ans, x*k + y*(k+1) + add);
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
	 return 0;
	 
}




