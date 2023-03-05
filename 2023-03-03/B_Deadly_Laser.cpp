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
		int n, m, x, y, d;
		cin >> n >> m >> x >> y >> d;
		int dist = (n - 1) + (m - 1);

		if ((x+d >= n && x-d <=1) || (y+d >=m && y-d <=1) || (abs(x-n) <= d && abs(y-m) <= d) || (abs(x-1) <= d && abs(y-1) <= d)){
			cout << -1 << endl;
		} else {
			cout << dist << endl;
		}
	 }
}