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

		int n;
		cin >> n;
		vector<ll> arr(n);

		for (auto& x:arr){
			cin >> x;
		}
		int g = 0;

		for (int i = 0; i < n; i++){
			g = gcd(g, arr[i]);
		}

		if (g ==1){
			cout << "0\n";
		} else{
			int ans = 3;
			for (int i = 0; i < n;i++){
				if(gcd(g,i+1) == 1)
					ans = min(ans, n - i);
			}
			cout << ans << endl;
		}
	 }
}