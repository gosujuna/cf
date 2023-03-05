#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

template <typename T> T expo(T a, long long b) {
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
const int m = 998244353;

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		int l, r;
		cin >> l >> r;

		ll s = 0;

		int z = l ;



		while (z <= r){
			s++;
			z = z * 2;
		}

		int ans2 = (r / (1 << (s - 1)) - l + 1);
		if (s > 1){
			ans2 += (s - 1) * max(0, (r / ((1 << (s - 2)) * 3) - l + 1));
		}

		cout << s << " " << ans2 << endl;
	 }	
}