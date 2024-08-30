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
	
}
const ll mod=998244353;
int n, m,a[100100]; long long ans[300300], inv[300300] = { 0,1 };
 
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a[i];
		m += a[i];
	}
	for (int i = 2; i < 300300; i++) inv[i] = (mod - mod / i) * inv[mod % i] % mod;
	vector<ll> v(m + 1);
	v[0] = v[1] = 0;

	for (int i = 1; i < m; i++){
		ll diff = 1ll * (n - 1) * i % mod * (v[i] - v[i - 1] + 1) % mod;
		diff = diff * inv[m - i] % mod;
		v[i + 1] = (v[i] + diff) % mod;
	}

	ll last = v[m];

	for (int i = 0; i < n; i++){
		last = (last - v[a[i]]) % mod;
		
	}

	if (last <0){
		last += mod;
	}
	

	cout << last << endl;
}