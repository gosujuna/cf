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
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	vector<int> capacity(3);
	vector<int> milk(3);

	for (int i = 0; i < 3; i++) {
		int a, b;
		cin >> a >> b;
		capacity[i] = a;
		milk[i] = b;
	}

	for (int j = 0; j < 100; j++) {
		int bucket1 = j % 3;
		int bucket2 = (j + 1) % 3;

		int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

		milk[bucket1] -= amt;
		milk[bucket2] += amt;
	}

	for (int m : milk) {
		cout << m << "\n";
	}
}