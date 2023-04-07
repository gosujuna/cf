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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int dy = d - b;
		int dx = c - a;


		if (b>d){
			cout << -1 << endl;
			continue;
		}

		
		if (dy >= dx){
			cout << (2 * dy - dx) << endl;
		} else
			cout << -1 << endl;
	 }
}