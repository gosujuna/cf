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

void change(int &val) { val = 0; }

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int variable = 100;
	cout << "Variable is" << variable << endl;
	change(variable);
	cout << "Variable is" << variable << endl;

	int T, n;
	cin >> T;
	while (T--) {
		scanf("%d", &n);
		int s = 0, A0 = 0, A1 = 0, B0 = 0, B1 = 0;
		for (int i = 1;; i++) {
			int l = s + 1, r = min(n, s + i);
			if (i % 4 == 1 || i % 4 == 0)
				A0 += (r + 1) / 2 - l / 2, A1 += r / 2 - (l - 1) / 2;
			else
				B0 += (r + 1) / 2 - l / 2, B1 += r / 2 - (l - 1) / 2;
			s += i;
			if (s >= n)
				break;
		}
		printf("%d %d %d %d\n", A0, A1, B0, B1);
	}

	return 0;
}