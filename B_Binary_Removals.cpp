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
		str s;
		cin >> s;
		int z = s.size();
		bool found1 = false;
		bool ans = true;

		for (int i = 0; i < z-1; i++){
			if (s[i] == '1' && s[i+1] == '1'){
				found1 = true;
			}
			if (found1 && s[i] == '0' && s[i+1] == '0'){
				ans = false;
				break;
			}
		}

		cout << ((ans) ? "YES" : "NO") << endl;
	 }
}