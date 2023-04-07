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
	 while(T--){
		int n;
		cin >> n;
		vector<int> a(n);
		int count = 0;
		int m = 0;
		for (auto& i:a){
			cin >> i;
			if (i ==0){
				count++;
			}
			m = max(i, m);
		}

		//cout << "m is " << m << endl;

		if (m == 0){
			cout << 1 << endl;
			continue;
		}

		if ((n-count +1) >= count){
			cout << 0 << endl;
			continue;
		}

		if (m >1){
			cout << 1 << endl;
		} else{
			cout << 2 << endl;
		}
		


	 }
}