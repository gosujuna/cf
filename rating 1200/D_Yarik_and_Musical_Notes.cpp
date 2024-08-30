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
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}

	map<int,int> mp;
	ll ans  =0;

	for (int i =0; i<n; i++){
		ans += mp[a[i]];
		if (a[i] == 1){
			ans += mp[2];
		} else if (a[i] == 2){
			ans += mp[1];
		}
		mp[a[i]]++;
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