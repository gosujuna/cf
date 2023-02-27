#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		ll a;
		cin >> a;

		if (a % 2 == 0) {
			cout << a/2 << " " << 1 << endl;
		}
		else{
			cout << -1 << endl;
		}
	 }
}