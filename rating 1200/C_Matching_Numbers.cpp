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
	ll n;
	cin >> n;
	if (n % 2==0){
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
	vector<ll> sum(n);
	ll s = (2*n) * (2*n + 1) / 2;
	s = s / n;
	s -= n / 2;

	for (int i = 0; i < n; i++){
		sum[i] = s;
		s++;
	}
	int order = 0;

	for (int i = 1; i <= n; i += 2){

		cout << i << " " << sum[order] - i << endl;
		order++;
	}

	for (int i = 2; i <= n-1; i+=2){
		cout << i << " " << sum[order] - i << endl;
		order++;
	}
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}