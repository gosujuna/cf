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
		vector<vector<int>> a(2);
		for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		a[v & 1].push_back(v);
		}

		bool ans=1;

		for(vector<int> x:a){
		vector<int> sx = x;
		sort(all(sx));
		if (sx != x){
			ans = 0;
		}
		}
		cout << (ans ? "YES" : "NO") << endl;
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