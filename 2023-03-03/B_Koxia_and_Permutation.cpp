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
		int n, k;
		cin >> n >> k;


		for (int i = 0; i < n; i++){
			if (i % 2 == 0){
				cout << (n - i / 2) << " ";
			}
			else{
				cout << (1 + i / 2) << ' ';
			}
		}
		cout << '\n';
	 }
}