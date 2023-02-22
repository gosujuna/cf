#include <bits/stdc++.h>

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
	using namespace std;
	// ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;

	vector<int> x(n);
	vector<int> y(n);

	for (int a = 0; a < n; a++) {
		cin >> x[a];
	}

	for (int b = 0; b < n; b++) {
		cin >> y[b];
	}

	int m = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			int sq = dx * dx + dy * dy;

			m = max(m, sq);
		}
	}
	cout << m << endl;

	return 0;
}