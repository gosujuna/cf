#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define forn(i, n) for (int i = 0; i < int(n); ++i)

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
		vector<vector<int>> a(n, vector<int>(n));
		int l = 1;
		int r = n * n;
		int t = 0;
		forn(i,n){
			forn(j,n){
				if (t)
					a[i][j] = l++;
				else
					a[i][j] = r--;
				t ^= 1;
			}
			if (i & 1) reverse(a[i].begin(), a[i].end());
		}

		forn(i, n) forn(j, n) cout << a[i][j] << " \n"[j == n - 1];
	 }
}