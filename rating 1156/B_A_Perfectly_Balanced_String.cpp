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
		set<char> c;
		bool ok = true;
		int k;
		for (k = 0; k < n; k++){
			if (c.find(s[k]) == c.end()){
				c.insert(s[k]);
			} else{

				break;
			}
		}
		for (int i = k; i < n; i++){
			if (s[i] != s[i-k]){
				ok = false;
			}
		}

		cout <<  (ok ? "YES" : "NO") << endl;
		//1242 regen totoik
		
	 }
}