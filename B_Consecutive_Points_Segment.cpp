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
void solve() { 
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& i : a){
		cin >> i;
	}

	if (n == 1){
		cout << "YES" << endl;
		return;
	}
	int totaldiff = 0;

	for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] > 3) {
				totaldiff += 3;
				break;
			}



			if (a[i] - a[i - 1] == 2) {
				totaldiff++;

			}

			if (a[i] - a[i - 1] == 3) {
				totaldiff += 2;
			}
			

			
			
			
		}
	if (totaldiff <= 2){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
	
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