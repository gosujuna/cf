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
	 

	 for (int i = 0; i < T; i++){
		int sum = 0;
		int neg = 0;
		int n;
		cin >> n;
		vector<int> a(n);

		for (int j = 0; j < n; j++){
			cin >> a[j];
			if (a[j] < 0) {
				neg++;
				a[j] = -a[j];
			}
			sum += a[j];
		}

		if (neg % 2 == 1){
			int mn = *min_element(a.begin(), a.end());
			sum -= 2 * mn;
		}

		cout << sum << endl;
	 }
		
}