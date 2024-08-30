#include <bits/stdc++.h>
using namespace std;
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

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		ll m = 0;
		vector<ll> pref(n);
		pref[0] = a[0];
		ll total = accumulate(all(a), 0LL);

		for (int i = 1; i < n;i++){
			pref[i] = pref[i - 1] + a[i];
		}

		for (int i = 0; i < n-1; i++) {
			ll c = pref[i];

			ll b = total - pref[i];

			m = max(gcd(b, c), m);
		}
		cout << m << endl;
	 }
}