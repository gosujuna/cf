#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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

void solve(){
	// looknice;
	int n;
	cin >> n;
	string s;
	cin >> s;

	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);


	for (int i = 0; i < n; i++){
		a[i] = s[i] - 'a';
		b[i] = a[i];
		c[i] = a[i];
	}

	int ind = 1e6;
	sort(all(b));
	for (int i = 0; i < n; i++){
		if (a[i] != b[i]){
			ind=i;
			break;
		}
	}
	int help = min_element(a.begin(), a.end()) - a.begin();
	int plz = a[help];

	for (int i = 0; i < n; i++){
		if (a[i] == plz){
			help = i;
		}
	}

		if (ind == 1e6) {
			cout << s << endl;
		} else {

			int test = 0;
			test = a[help];
			a.insert(a.begin(), test);
			a.erase(a.begin() + help + 1);
			bool help2 = 0;

			for (int i = 0; i < n; i++) {
				if (a[i] < c[i]) {
					help2 = 1;
					break;
				} else if (a[i] > c[i]) {
					help2 = 0;
					break;
				}
			}
			if (help2) {
				cout << s[help] << s.substr(0, help)
					 << s.substr(help + 1, n - help - 1) << endl;

			} else {
				cout << s << endl;
			}
		}
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}