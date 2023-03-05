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


		string s;

		cin >> s;
		map<char, int> m;
		for (int i = 0; i < n;i++){
			m[s[i]]++;
		}
		int ans = 0;
		int ad = 0;
		for (char i = 'a'; i <= 'z'; i++){
			ans += min(m[i], m[toupper(i)]);
			ad += (abs(m[i] - m[toupper(i)])) / 2;
		}
		ans += min(ad, k);


		cout << ans << endl;
	 }
}