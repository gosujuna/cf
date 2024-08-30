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
	ll h, p;
	cin >> h >> p;

	ll tasks = 1;
	tasks = tasks << h;

	tasks--;
	if (tasks <= p){
		cout <<h << endl;
		return;
	}

	

	ll k = 1;
	ll a = 1;
	while (a<= p){
		a *= 2;
		k++;
		if (a>p){
			k--;
		}
	}
	

	ll ans = 0;
	ans += k;
	ll b = 1 << k;
	b--;

	ll help = tasks - b;
	ans += (help / p);
	ans += (help % p != 0);
	cout << ans << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}