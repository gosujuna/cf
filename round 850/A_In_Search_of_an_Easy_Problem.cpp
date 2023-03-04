#include <bits/stdc++.h>
using namespace std;

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

	vector<int> test(T);

	 for (int i = 0; i < T; i++){
		cin >> test[i];
	 }

	if (find(test.begin(), test.end(), 1) != test.end())
		cout << "HARD";
	else
		cout << "EASY";
}