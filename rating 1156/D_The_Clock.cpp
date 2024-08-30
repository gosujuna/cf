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

int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0,	 70,  140, 210, 280,  350,	601,  671,
				741, 811, 881, 951, 1202, 1272, 1342, 1412};

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		string s;
		cin >> s;
		int x;
		cin >> x;
		int total = 0;

		for (int i = 0; i < 5; i++){
			total += (int)(s[i] - '0') * a[i];
		}
		set<int> t;
		for (int i = 0; i < 2022; i++){
			t.insert(total);
			total += x;
			total %= 1440;
		}
		int res = 0;
		for (int i :t){
			for (int j = 0; j < 16; j++){
				if (good[j] == i) {
					res++;
				}
			}

		}
		cout << res << endl;
	 }
}