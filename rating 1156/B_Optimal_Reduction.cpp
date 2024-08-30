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
	 while (T--){
		int n;
		cin >> n;
		vector<ll> a(n+1);
		for (int i = 1; i <= n; i++)
            cin >> a[i];


		int prelen = 1;
		while (prelen <= n && a[prelen] <= a[prelen+1]){
			prelen++;
		}

		int sufflen = 1;
		while (sufflen <=n && a[n-sufflen] >= a[n-sufflen+1]){
			sufflen++;
		}

		if (prelen + sufflen >= n){
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	 }
}