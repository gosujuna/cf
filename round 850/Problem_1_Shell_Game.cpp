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
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> shell_at_pos(3);
	for (int i = 0; i < 3; i++) {
		shell_at_pos[i] = i;
	}

	vector<int> counter(3);
	for (int i = 0; i < n; i++) {
		int a, b, g;
		cin >> a >> b >> g;

		a--;
		b--;
		g--;

		swap(shell_at_pos[a], shell_at_pos[b]);

		counter[shell_at_pos[g]]++;
	}

	int ans = max({counter[0], counter[1], counter[2]});

	cout << ans << endl;
	return 0;
}