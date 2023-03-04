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
	 int n,x;
	 cin >> n >> x;

	 vector<int> values(n);

	 for (int i = 0; i < n; i++){
		cin >> values[i];
	 }

	map<int, int> mp;

	for (int i = 0; i < n; i++){
		if (mp.count(x-values[i])){
			cout << i + 1 << " " << mp[x - values[i]] << endl;
			return 0;
		}

		mp[values[i]] = i + 1;
	}

	cout << "IMPOSSIBLE" << endl;
}