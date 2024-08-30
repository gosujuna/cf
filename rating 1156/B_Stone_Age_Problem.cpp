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
	ll n, q;
	cin >> n;
	cin >> q;
	vector<ll> a(n);

	for (int i = 0; i < n; i++){
		ll test;
		cin >> test;
		a[i] = test;

	}

	ll sum;
	sum= accumulate(all(a), 0LL);
	vector<int> T(n, -1);
	int upd = 0, time = -2;


	for (int i = 0; i < q; i++){
		int cas;
		cin >> cas;
		if (cas == 1){
			ll p, x;
			cin >> p >> x;
			p--;
			if (time >= T[p]){
				sum -= upd;
			} else {
				sum -= a[p];
			}

			a[p] = x;
			sum += x;
			T[p] = i;

			cout << sum << endl;
		} else{
			ll  x;
			cin >> x;
			upd = x;
			time = i;
			sum =  n * x;
				cout << sum << endl;
		}
	}
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}