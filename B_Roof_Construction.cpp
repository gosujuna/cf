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
	 while(T--){
		int n;
		cin >> n;

		int b = 1;
		int count = 0;
		while (b<= n){
			count++;
			b = b * 2;
		}

		for (int i = 0; i < b-1; i++){
			cout << (b - 1) - i << " ";
		}

		for (int i = b; i < n; i++){
			cout << i << " ";
		}
		cout << endl;
	}
}