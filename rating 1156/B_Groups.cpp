#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
		int n;
		cin >> n;
		vector<vector<int>> a(n, vector<int>(5));


		for (int i = 0; i < n;i++){
			for (int j = 0; j < 5; j++){
				cin >> a[i][j];
			}
		}
		bool ok = false;

		for (int x = 0; x < 5; x++){
			for (int y = x + 1; y < 5; y++){
				int ka = 0;
				int kb = 0;
				int kab = 0;
				for (int i = 0; i < n; i++){
					if (a[i][x] == 1 && a[i][y] == 1){
						kab += 1;
					} else{
						if (a[i][x] == 1){
							ka += 1;
						}
						if (a[i][y] == 1){
							kb+= 1;
						}
					}
				}
				if (ka + kb + kab == n && ka + kab >= n/2 && kb + kab >= n/2){
					ok = true;
				}
			}
		}

		cout << (ok ? "YES": "NO") << endl;
	 }
}