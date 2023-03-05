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

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		int n, r, b;
		cin >> n >> r >> b;

		string ans = "";
		int len = r / (b+1);
		string test = "R";
		string test2 = "B";
		string append = "";
		string diff = "";

		//int diff = r - b+1;
		for (int i = 0; i < (r/len); i++){
			append += test;
		}


		for (int i = 0; i < len; i++){

			ans += append;
			ans += test2;

		}

		for (int i = 0; i < (r % len); i++){
			diff += test;
		}


		ans += diff;
		cout << ans << endl;
	 }
}