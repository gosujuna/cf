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
void solve() { int n, k;
	cin >> n >> k;
	vector<int> a(k);
	for (auto& i: a){
		cin >> i;
	}

	vector<int> cost(k);

	for (int i = 0; i < k;i++){
		cost[i] = n - a[i];

	}

	sort(all(cost));
	int count = 0;
	int ans = 0;
	for (int i = 0; i < k; i++){

		if (count + cost[i] < n){
			count += cost[i];
			ans++;
		} else{
			break;
		}
		
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