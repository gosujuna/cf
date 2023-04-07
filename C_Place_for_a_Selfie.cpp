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
	int n, m;
	cin >> n >> m;
	vector<ll> lines(n);

	for (auto& i:lines){
		cin >> i;
	}

	sort(all(lines));


	for (int i =0; i<m; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		auto ind = lower_bound(all(lines), b);

		if (ind != lines.end()){
			ll ind1 = ind - lines.begin();
			ll help = b - lines[ind1];
			if ((help * help) - 4*a*c <0){
				cout << "YES" << endl;
				cout << lines[ind1] << endl;
				continue;
			}
		}

		if (ind != lines.begin()){
			ll ind2 = ind - lines.begin() - 1;
			ll help = b - lines[ind2];
			if ((help * help) - 4*a*c <0){
				cout << "YES" << endl;
				cout << lines[ind2] << endl;
				continue;
			}

		}
		5.53
		1.56
		16.44
		0.89

		cout << "NO" << endl;
	}
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