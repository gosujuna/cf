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

int T;

ll weight[20];

ll solve(int i, ll sum1, ll sum2){
	if (i==T) {
		return abs(sum1 - sum2);
	}

	return min(solve(i + 1, sum1 + weight[i], sum2),
			   solve(i + 1, sum1, sum2 + weight[i]));
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);

	 cin >> T;

	 long long b = 15;

	 for (int i = 0; i < T; i++) {
		cin >> weight[i];
	 }

		cout << solve(0, 0, 0) << endl;
}