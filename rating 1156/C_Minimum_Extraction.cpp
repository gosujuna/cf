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

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& i:a){
		cin >> i;
	}

	sort(all(a));
	int m = a[0];

	for (int i = n-1; i >= 1; i--){
		int b = a[i] - a[i - 1];
		m = max(m, b);
	}
	cout << m << endl;
}	

	int main() {
		//	freopen("input.txt", "r", stdin);
		//	freopen("output.txt", "w", stdout);
		ios_base::sync_with_stdio(false), cin.tie(nullptr);
		int T;
		cin >> T;
		while (T--) {
			solve();
		}
}