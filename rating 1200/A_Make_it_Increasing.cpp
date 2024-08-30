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

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 ll n, a[5005], ans = 1e18;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int pos = 1; pos <= n; pos++){
		ll prev = 0, sum = 0;
		for (int i = pos - 1; i >= 1; i--){
			prev += a[i] - prev % a[i];
			sum += prev / a[i];
		}
		prev = 0;
		for (int i = pos + 1; i <= n; i++){
			prev += a[i] - prev % a[i];
			sum += prev / a[i];
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}