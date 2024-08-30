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
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		if (n==2 || m<(n)){
			cout << -1 << endl;
			continue;
		}

		int s = accumulate(all(a), 0);

		cout << s * 2 << endl;

		for (int i = 0; i < n; i++){
			cout << (i + 1) << " " << ((i + 1) % n) + 1 << endl;
		}
	 }
}