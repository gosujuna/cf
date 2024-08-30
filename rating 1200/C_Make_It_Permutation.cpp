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
	ll n, c, d;
	cin >> n >> c >> d;
	vector<ll> a;
	set<ll> s;
	ll cost = 0;
	ll cost2 = c * n + d;

	for (int i = 0; i < n; i++){
		ll test;
		cin>>test;
		if (s.count(test)==0){
			a.push_back(test);
			s.insert(test);
		}
		else{
			cost += c;
		}
	}
	sort(a.rbegin(), a.rend());
	debug(a);


	ll help = LLONG_MAX;

	for (int i = 0; i < sz(a); i++){
		ll test = c * i;
		ll missing = a[i] - sz(a) + i;
		ll w = test + d * missing;
		help = min(help, w);
	}

	cost += help;
	cost = min(cost, cost2);

	cout << cost << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}