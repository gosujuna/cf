#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
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
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		vector<vector<int>> x(2, vector<int>(n+1));

		for (int i = 1; i <= n;i++){
			int h = a[i - 1];

			x[i & 1][h] = max(x[i & 1][h], x[(i ^ 1) & 1][h] + 1);
		}

			for (int i = 1; i <= n; i++) {
				cout << max(x[0][i], x[1][i]) << " ";
			}
		cout << endl;
	 }
}