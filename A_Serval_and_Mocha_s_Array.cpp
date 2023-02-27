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

	 for (int i = 0; i < T; i++) {

		// a is good if len(a)> all elelemnts
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		int ans = 0;

		for (int a = 0; a < n; a++){
			for (int b = a + 1; b < n; b++){
				int o;
				int p;
				o = arr[a];
				p = arr[b];
				int x = gcd(o, p);
				if (x <= 2) {
					ans = 1;
					break;

				}

			}
		}

		if (ans == 1) {
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;

		
	 }
}