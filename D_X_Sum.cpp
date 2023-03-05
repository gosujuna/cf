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
	 while (T--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>a(n);

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				int b;
				cin >> b;
				a[i].push_back(b);
			}
		}

		int mx =0;

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
					int now = 0;
				int ci = i, cj = j;
				while(ci >= 0 && ci < n && cj >= 0 && cj < m)
				{
					now+=a[ci][cj];
					ci--;
					cj--;
				}
				ci = i, cj = j;
				while(ci >= 0 && ci < n && cj >= 0 && cj < m)
				{
					now+=a[ci][cj];
					ci++;
					cj--;
				}
				ci = i, cj = j;
				while(ci >= 0 && ci < n && cj >= 0 && cj < m)
				{
					now+=a[ci][cj];
					ci--;
					cj++;
				}
				ci = i, cj = j;
				while(ci >= 0 && ci < n && cj >= 0 && cj < m)
				{
					now+=a[ci][cj];
					ci++;
					cj++;
				}
				now-=a[i][j]*3;
				mx = max(mx, now);
				}
		}

		cout << mx << endl;
	 }

}