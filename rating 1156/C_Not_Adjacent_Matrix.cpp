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
		if (n==2){
		cout << -1 << endl;
		return;
		}
		int sq = n * n;
		vector<int> a(sq);
		int d = (n * n / 2);
		int count = 1;
		if (n%2 == 0){
			for (int i = 0; i < sq; i = i+2){
				a[i] = count;
				a[i + 1] = d + count;
				count++;
			}
		}else{
			a[0] = n * n;
			for (int i = 1; i < (n * n); i = i+2){
				a[i] = count;
				a[i + 1] = d + count;
				count++;
			}
			
		}
		for (int i = 0; i < n;i++){
			for (int j = 0; j < n;j++){
				cout << a[j + n * i] << " ";
			}
			cout << endl;
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