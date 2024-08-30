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
		string s;
		cin >> s;
		int n = sz(s);

		vector<bool> a(n + 1);

		a[0] = true;

		for (int i = 0; i < n; i++){
			a[i + 1] = a[i] && (s[i] == '1' || s[i] == '?');
		}
		vector <bool> b(n + 1);
		b[0] = true;
		for (int i = n - 1; i >= 0; i--){
			b[n - i] = b[n - i - 1] && (s[i] == '0' || s[i] == '?');
		}
		int ans = 0;
		for (int i = 0; i < n; i++){
			if (a[i] && b[n-i-1]){
				ans++;
			}
		}
		cout << ans << endl;
	 }
}