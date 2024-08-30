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
	string s;
	cin >> s;
	int mod = 998244353;
	ll res = 1;
	ll n = s.size();
	ll seg = s.size();
	
	for (int i = 0; i<n;){
		int r = i+1;
		while (r<n && s[i] == s[r]){
			r++;
		}
		res = res * (r-i) % mod;
		seg--;
		i = r;
	}

	for (int i =1; i<= seg; i++){
		res = res * i % mod;
	}

	cout << seg << " " << res << endl;

	




	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}