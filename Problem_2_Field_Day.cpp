
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
	 

	 int d, n;
	 cin >> d >> n;
	 const int c = d;

	 vector<int> a(n);
	 for (int i = 0; i < n;i++) {
		string s;
		cin >> s;
		for (int j = 0; j < c;j++){
			if (s[j] == 'G'){
				s[j] = '0';
			} else {
				s[j] = '1';
			}
		}


		a[i] = stoi(s,0,2);
	 }

	 vector<int> b(n);



	 for (int i = 0; i < n;i++){

		int m = 0;

		for (int j = 0; j < n;j++){
			int target = __builtin_popcount(a[i] ^ a[j]);
			if (target == c){
				m = c;
				continue;
			}
			if (target> m) {
				m= target ;
			}
		}

		b[i] = m;
	 }

	 for (int i = 0; i < n;i++){
		cout << b[i] << endl;
	 }
}