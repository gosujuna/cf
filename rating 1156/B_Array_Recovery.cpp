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
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		vector<int> b(n);

		b[0] = a[0];

		for (int i = 1; i < n;i++){
			if (a[i]==0){
			b[i] = b[i - 1];
			continue;
			}
			if ((b[i-1] + a[i] >= 0) && (b[i-1] - a[i] >=0)){
				cout << -1 << endl;
				return;
			} else{
				b[i] = b[i - 1] + abs(a[i]);
			}
		}

		for (int i = 0; i < n; i++){
			cout << b[i] << " ";

		}
		cout << endl;
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