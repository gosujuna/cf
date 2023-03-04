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

	 while (T--) {
		int n;
		cin >> n;

		map<int, int> cnt;

		int g =0;

		for (int i = 2; i * i <= n; i++) {
			while (n% i == 0) {
				cnt[i]++;
				g = max(g, cnt[i]);
				n = n / i;
			} 

		}

		if (n > 1)
			cnt[n]++, g = max(g, 1); // this is just for if given number is prime

		vector<int> ans(g, 1); // array initail with length g , value 1

		for (auto &[n,e] : cnt) {

			for (int z = 1; z <= e; z++){
				ans[z - 1] = ans[z - 1] * n;


			}
		}

		cout << accumulate(all(ans), 0) << endl;
	 }
}