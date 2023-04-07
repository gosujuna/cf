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
		int m = 2 * n;
		vector<ll> a(m);
		for (auto& i:a){
			cin >> i;
		}


		if (n ==1){
			
			cout << abs(a[1] - a[0]) << endl;
			continue;
		}

		vector<ll> x(m);
		vector<ll> y(m);
		vector<ll> z(m);
		fill(all(x), -1);
		fill(all(z), 2);
		x[m - 1] = n;



		
		sort(all(a));

		ll s1 = 0;
		ll s2 = 0;
		ll s3 = 0;
		for (int i = 0; i < m;i++){
			s1 += abs(x[i] - a[i]);
			s2 += abs(y[i] - a[i]);
			s3 += abs(z[i] - a[i]);
		}

		ll sum = s2;

		if (n %2 == 0){
			sum = min(sum, s1);
		}
		if (n==2){
			sum = min(sum, s3);
		}

		cout << sum << endl;
		




	 }
}