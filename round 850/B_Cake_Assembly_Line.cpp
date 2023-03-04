#include <bits/stdc++.h>

using namespace std;

const int inf = 1000000000;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n, w, h;
		cin >> n >> w >> h;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> c(n);
		for (int i = 0; i < n; i++) {
			cin >> c[i];
		}
		int minshift = -inf;
		int maxshift = inf;
		for (int i = 0; i < n; i++) {
			minshift = max(minshift, (a[i] + h) - (c[i] + w));
			maxshift = min(maxshift, (a[i] - h) - (c[i] - w));
		}
		if (minshift <= maxshift) {
			cout << "YES" << '\n';
		} else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}