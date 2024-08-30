#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string; // ben qi python
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
const int mod = 998244353;

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
		vector<int> a(n);
		for (int i = 1; i < n;i++) {
			int test;
			cin >> test;
			a[i] = test;
		}

		vector<ll> dp(n);
		vector<ll> dp2(n);
		dp[0] = 0;
		dp2[0] = 1;

		for (int i = 1; i < n;i++){
			if (a[i] == 0){
				dp[i] = i * dp[i - 1] + dp2[i - 1];
				dp2[i] = i * dp2[i - 1];
			} else{
				dp[i] = i * dp[i - 1];
				dp2[i] = (i - 1) * dp2[i - 1];
			}
			dp[i] %= mod;
			dp2[i] %= mod;
		}

		for (int i = 1; i < n;i++){
			cout << dp[i] << " ";
		}
		cout << endl;
	 }
}