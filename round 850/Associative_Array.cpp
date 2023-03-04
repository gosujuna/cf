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

	 map<int, int> m;

	 int a, b,c;

	 for (int i = 0; i < T; i++){
		cin >> a;
		if (a == 0) {
			cin >> b >> c;
			m[b] = c;
		}
		else{
			cin >> b;
			cout << m[b] << endl;
		}
	 }
}