#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 ll inf = 1e18;
	 int n,m,q;
	 cin >> n >> m >> q;

	 vector<vector<ll>> mat(n, vector<ll>(n, inf));

	 for (int i = 0; i < m; i++){
		int u, v, w; 
		cin >> u >> v >> w, u--, v--; //uv decreased to match index
		if (w < mat[u][v]) mat[u][v] = mat[v][u] = w;

	 }

	 for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (mat[i][k] + mat[k][j] < mat[i][j])
					mat[i][j] = mat[j][i] = mat[i][k] + mat[k][j];
			}
		}
	 }

	 while (q--) {
		int u, v;
		cin >> u >> v, u--, v--;

		if(u == v) mat[u][v] = 0;

		if (mat[u][v] == inf) mat[u][v] = -1;
		cout << mat[u][v] << endl;
	 }
}