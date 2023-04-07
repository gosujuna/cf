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
		vector<int> ans(n);
		vector<vector<int>> bonus(n, vector<int>(5,0));

		for (int i = n - 1; i >= 0;  i--) {
			ans[i] = a[i];
			int j = i + a[i];
			if (j < n){
				ans[i] += ans[j];
			}
		}

		cout << *max_element(all(ans)) << endl;
	 }
}