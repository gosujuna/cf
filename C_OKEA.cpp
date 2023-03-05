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
void solve(){
	int n, k;
	cin >> n >> k;
	//int total = n * k;

	if (k == 1){
		cout << "YES" << endl;
		int count = 1;

		for (int i = 0; i < (n*k);i++){
			cout << count << " ";
			count++;
			cout << endl;
		}
		return;
	}

	if (n % 2 == 0){

		cout << "YES" << endl;

		for (int i = 1; i <= (n);i++){
			for (int j = 0; j < k; j++){
				cout << i + j * n << " ";
			}
			cout << endl;
		}
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
	 while (T--){
		solve();
		 }
}