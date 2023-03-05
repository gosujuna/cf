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
		int n;
		cin >> n;
		string s;
		cin >> s;
		set<string> st;
		bool ok = false;
		for (int j = 0; j < n - 1; j++){
			if (st.count(s.substr(j, 2)) == 1) { ok = true; }

			if (j >= 1){
        		st.insert(s.substr(j - 1, 2));
      		}

		}

		if (ok) {
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	 }
}