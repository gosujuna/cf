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
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	cin >> n;
	vector<int> rnd(n);
	string s;
	cin >> s;
	int k = 0;
	for (int i  =0; i<n; i++){
		rnd[i] = (s[i] - '0');
		k += rnd[i]; 
	}

	for (int x = 1 << k; x <= (1 << n) - (1 << (n-k)) + 1; x++){
		cout << x << " ";
	}
	

}