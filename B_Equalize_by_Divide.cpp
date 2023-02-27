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
		vector<int> a(n);

		for (auto& A : a)
			cin >> A;
		
		if(*min_element(a.begin(), a.end()) == 1) {
			if(*max_element(a.begin(), a.end()) == 1){
				cout << 0 << endl;
			}
			else {
				cout << -1 << endl;
			}
			continue;
		}

		
		std::vector<std::array<int, 2>> ops; ops.reserve(30*n);
		while (true){
			int j = int(min_element(a.begin(), a.end()) - a.begin());
			bool all_eq = true;

			for (int i = 0; i < n; i++){
				while (a[i] > a[j]) {
					ops.push_back({i, j});
					a[i] = (a[i] + a[j] - 1) / a[j];
				}
				if (a[i] < a[j]) all_eq = false;
			}
			if (all_eq)
				break;
		}

		cout << ops.size() << endl;
		for(auto [i,j] : ops){
			cout << i + 1 << " " << j + 1 << endl;
		}
	 }

	 return 0;
}