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

		string ans(n, '0');
		vector<string> a(n);
		map<string, bool> mp;

		for (int i = 0; i < n; i++){
			string s;
			cin >> s;
			a[i] = s;
			mp[a[i]] = true;
		}

		for (int i = 0; i < n; i++){
			bool ok = false;
			for (int j = 1; j< int(a[i].length()); j++){
				string pref = a[i].substr(0, j),
					   suff = a[i].substr(j, a[i].length() - j);
				if (mp[pref] && mp[suff]) {
					ok = true;
				}
			}
			cout << ok;
		}
		cout << endl;

		
	 }
}