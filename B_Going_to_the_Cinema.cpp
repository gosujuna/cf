#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

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
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;

	 while (T--){
		int n;
		cin >> n;

		vector<int> cnt(n + 1);
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			cnt[a] += 1;
		}
		int ans = 0;
		int sum = 0;
		for (int k = 0; k <= n; k++){
			if (cnt[k] == 0 && sum ==k){
				ans += 1;
			}
			sum += cnt[k];
		}

		cout << ans << '\n';
	 }
}