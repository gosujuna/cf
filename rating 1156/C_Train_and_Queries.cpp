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
	 while(T--){
		int n, k;
		cin >> n >> k;

		vector<ll> a(n);

		map<ll, int> b, c;


		for (auto& i:a){
			cin >> i;
		}

		for (int i = 0; i < n;i++){
			if (b[a[i]] == 0){
				b[a[i]] = i+1;
			}

			c[a[i]] = i+1;
		}

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			if( (b[x] <= c[y]) && b[x] != 0 && c[y] != 0){
				cout << "YES" << endl;
			} else
				cout << "NO" << endl;
		}
	 }
}