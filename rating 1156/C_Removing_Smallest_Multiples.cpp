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
	bool a[n + 1];
	string str;
	cin >> str;

	for (int i = 1; i <= n; i++){
		a[i] = (str[i - 1] == '1');
	}

	long long ans = 0;
	int cost[n+1];
	for (int i = n; i >= 1; i--){
		for (int j = i; j <= n; j+= i){
			if (a[j])
				break;
			cost[j] = i;

			// this line computes min cost for each until reach element we cant del

		}
	}

	for (int i = 1; i <= n; i++){
		if (!a[i])
			ans += cost[i];
	}
	cout << ans << endl;
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