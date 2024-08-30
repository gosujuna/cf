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
	int fact = 0;
	for (int i = 1; i <= n; i++) {
		int test;
		cin >> test;
		int count = 0;
		while (test % 2 == 0) {
			if (test % 2 == 0) {
				count++;
				test = test / 2;
			}
		}
		fact += count;

		}

		vector<int> b(n + 1);

		for (int i = 1; i <= n; i++){
			int count = 0;
			int ind = i;
			while (ind % 2 ==0){
				if (ind %2 ==0){
					count++;
					ind = ind / 2;
				}
			}
			b[i] = count;

		}
		sort(b.rbegin(), b.rend());


		int ans = 0;

		if (fact >= n){
			cout << 0 << endl;
			return;
		}

		for (int i = 0; i < n+1; i++){
			fact += b[i];
			ans++;
			if (fact>=n){
				cout << ans << endl;
				return;
			}
		}

		cout << -1 << endl;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }

}