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
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		bool first = false;
		int ind1 = 1e7;
		int ind2 = 0;
		bool second = false;

		for (int i = 0; i < n - 1;i++){
			if (!first && a[i] == a[i+1]){
				first = true;
				ind1 = i + 1;
				continue;
			}
			if (first && a[i] == a[i+1]){
				ind2 = i;
				second = true;
			}
		}

		//cout << "ind 1 :" << ind1 << "ind 2 " << ind2 << endl;

		if (second == false){
			cout << 0 << endl;
		} else
			cout << max(1,ind2 - ind1) << endl;
	 }
}