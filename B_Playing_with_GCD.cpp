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

void solve(){
int n;
		cin >> n;
		vector<ll> a(n+2,1);
		for (ll i = 1; i <= n; i++){
		cin >> a[i];
		}

		vector<ll> b(n + 2, 1);
		for (ll i = 1; i <= n+1; i++){
		b[i] = lcm(a[i], a[i - 1]);
		}

		for (ll i = 1; i <= n;i++){
			if (gcd(b[i], b[i+1]) != a[i]){
				cout << "NO" << endl;
				return;
			}
		}

		cout << "YES" << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		solve();
	 }
}

