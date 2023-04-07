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
		cin >>n;
		vector<int> a(n);

		for(auto& i:a){
			cin >> i;
		}

		int l = 0;
		int r = n - 1;

		int suml = a[0];
		int sumr = a[n - 1];

		int ans = 0;

		while (l<r){
			if (suml==sumr){
				ans = max(ans, l + 1 + n - r);
			}

			if (suml <= sumr){
				l+=1;
				suml += a[l];
			}

			else if (sumr <suml){
				r -= 1;
				sumr += a[r];
			}
		}

		cout << ans << endl;
	 }
}