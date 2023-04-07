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
		vector<int> b(n);
		vector<int> c(n);
		for (auto& i:a){
			cin >> i;
		}

		for (int i = 0; i < n;i++){
			b[i] = a[i];
			c[i] = a[i];
		}

		for (int i = 0; i < n;i++){
			if (a[i] == 0){
				a[i] = 1;
				break;
			}
		}

		for (int i = 0; i < n;i++){
			if (b[n-1-i] == 1){
				b[n-1-i] = 0;
				break;
			}
		}


		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				a[i] = 1;
			} else {
				a[i] = 0;
			}

			if (b[i] == 0) {
				b[i] = 1;
			} else {
				b[i] = 0;
			}
			if (c[i] == 0) {
				c[i] = 1;
			} else {
				c[i] = 0;
			}

			// cout << a[i] << endl;
		}

		vector<int> prefa(n);
		vector<int> prefb(n);
		vector<int> prefc(n);
		prefa[0] = a[0];
		prefb[0] = b[0];
		prefc[0] = c[0];
		for (int i = 1; i < n; i++){
			prefa[i] = a[i] + prefa[i - 1];
			prefb[i] = b[i] + prefb[i - 1];
			prefc[i] = c[i] + prefc[i - 1];
			//cout << pref[i] << endl;
		}
		ll ans = 0;
		ll ansb = 0;
		ll ansc = 0;

		for (int i = 0; i < n;i++){
			if (a[i] == 0){
				ans += (prefa[n - 1] - prefa[i]);
			}
			if (b[i] == 0){
				ansb += (prefb[n - 1] - prefb[i]);
			}
			if (c[i] == 0){
				ansc += (prefc[n - 1] - prefc[i]);
			}
			
		}

		ll final = max(ans, ansb);
		final = max(final, ansc);
		cout << final << endl;
	 }
}