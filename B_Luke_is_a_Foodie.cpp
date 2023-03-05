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

	 while(T--){
		int n;
		ll x;
		cin >> n >> x;

		vector<ll> a(n);

		for(auto& i : a){
			cin >> i;
		}
		int min = a[0];
		int max = a[0];

		int res = 0;
		for (int i = 1; i < n; i++){
			if (a[i] > max){
				max = a[i];
			}
			if (a[i] < min){
				min = a[i];
			}
			if (max - min > 2*x){
				res++;
				min = max = a[i];
			}
		}

		cout << res << '\n';
	 }
}