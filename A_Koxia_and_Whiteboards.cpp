#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
		int n, m;
		cin >> n >> m;
		m += n;
		vector<ll> a(m-1);
		for (auto& x:a){
			cin >> x;
		}

		sort(a.rbegin(), a.rend());
		ll z = 0;
		for (int i = 0; i < n-1; i++){
			z += a[i];
		}

		ll x;
		cin >> x;
		z += x;

		cout << z << '\n';
	 }
}