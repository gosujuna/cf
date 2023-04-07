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
	 while (T--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}
	

		for (int i = 0, j = -1; i < n; i++) {
        if (s[i] == '0') {
            j = i;
        } else if (j >= 0 && a[i] < a[j]) {
            std::swap(s[i], s[j]);
            j = i;
        }
    }

	ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ans += a[i];
        }
    }

		cout << ans << endl;
	 }
}