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
		ll n;
		ll k, b, s;
		cin >> n >> k >> b >> s;

		vector<ll> a(n);
		a[0] = k * b;
		s -= k * b;
		if (s<0)
			cout << "-1\n";
		else{
			for (int i = 0; i < n; i++){
				int now = min(s, k - 1);
				s -= now;
				a[i] += now;
			}
			if ( s > 0) {
			cout << "-1" << endl;
		} else{
			for (auto& i : a){
				cout << i << " ";
			}
			cout << '\n';
		}
		}
		


	 }
}