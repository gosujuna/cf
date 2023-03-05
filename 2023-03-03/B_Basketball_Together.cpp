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
	 ll n,d;
	 cin >> n >> d;

	 vector<ll> a(n);

	 for (auto& i : a){
		cin >> i;
	 }
	 sort(a.rbegin(), a.rend());
	  // sort first greatest

	 if (a[0] * n  <= d){
		cout << 0 << endl;
		return 0;
	 } 



		for (auto &i : a) {
			i = d/i + 1;

		}

	 ll ans, sum;
	 ans = 0;
	 sum = 0;
	 int i = 0;

	 while (sum <= n){
		
		sum += a[i];
		if (sum > n){
			break;
		}
		i++;
		ans++;
	 }

	 if (ans > n) {
		ans = n;
	 }

	 cout << ans;
}