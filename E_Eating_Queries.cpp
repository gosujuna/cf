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
		int n, q;
		cin >> n >> q;
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}
		sort(a.rbegin(), a.rend());
		ll s = accumulate(all(a), 0);
		vector<int> pref(n);
		pref[0] = a[0];
		for (int i = 1; i < n;i++) {
			pref[i] = a[i] + pref[i - 1];
		}
		for (int i = 0; i < q; i++){
			int num;
			cin >> num;
			if (num > s){
				cout << -1 << endl;
				continue;
			}

			auto low = lower_bound(all(pref), num);

			cout << (low - pref.begin()) + 1 << endl;
		}
	 }
}